// ˅
#include "behavioral_patterns/command/HistoryCommand.h"
#include "behavioral_patterns/command/PaintingCanvas.h"

using namespace System::Drawing;

// ˄

PaintingCanvas::PaintingCanvas(msclr::gcroot<PictureBox^> picture_box, HistoryCommand* history)
	: picture_box(picture_box)
	, point_radius(6.0)
	, history(history)
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

void PaintingCanvas::paint(const double painting_pos_x, const double painting_pos_y)
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
	grp_pic_box->FillEllipse(Brushes::Green, static_cast<int>(painting_pos_x), static_cast<int>(painting_pos_y), 12, 12);
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
