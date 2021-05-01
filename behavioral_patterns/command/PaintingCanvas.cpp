// ˅
#include "behavioral_patterns/command/PaintingCanvas.h"

using namespace System::Drawing;

// ˄

PaintingCanvas::PaintingCanvas(msclr::gcroot<PictureBox^> picture_box)
	: picture_box(picture_box)
	, point_radius(10.0)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

PaintingCanvas::~PaintingCanvas()
{
	// ˅
	
	// ˄
}

void PaintingCanvas::paint(const double x, const double y) const
{
	// ˅
	Bitmap^ bit_map = nullptr;
	if (picture_box->Image == nullptr) {
		bit_map = gcnew Bitmap(picture_box->Width, picture_box->Height);
	}
	else {
		bit_map = gcnew Bitmap(picture_box->Image);
	}
	Graphics^ grp_pic_box = Graphics::FromImage(bit_map);
	grp_pic_box->FillEllipse(Brushes::LightGreen,
								static_cast<int>(x - this->point_radius),
								static_cast<int>(y - this->point_radius),
								static_cast<int>(this->point_radius * 2),
								static_cast<int>(this->point_radius * 2));
	picture_box->Image = nullptr;
	picture_box->Image = bit_map;
	// ˄
}

void PaintingCanvas::clear()
{
	// ˅
	picture_box->Image = nullptr;
	// ˄
}

// ˅

// ˄
