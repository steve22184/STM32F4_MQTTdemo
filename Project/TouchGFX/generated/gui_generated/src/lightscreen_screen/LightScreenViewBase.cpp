/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/lightscreen_screen/LightScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

LightScreenViewBase::LightScreenViewBase() :
    buttonCallback(this, &LightScreenViewBase::buttonCallbackHandler)
{

    box1.setPosition(0, 0, 240, 320);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    boxWithBorder1.setPosition(0, 260, 240, 60);
    boxWithBorder1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    boxWithBorder1.setBorderSize(5);

    PreviousPageButton.setXY(0, 260);
    PreviousPageButton.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    PreviousPageButton.setLabelText(touchgfx::TypedText(T_SINGLEUSEID14));
    PreviousPageButton.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    PreviousPageButton.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    PreviousPageButton.setAction(buttonCallback);

    NextPageButton.setXY(180, 260);
    NextPageButton.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    NextPageButton.setLabelText(touchgfx::TypedText(T_SINGLEUSEID15));
    NextPageButton.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    NextPageButton.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    NextPageButton.setAction(buttonCallback);

    textArea1.setXY(95, 37);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID16));

    LightText.setXY(106, 75);
    LightText.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    LightText.setLinespacing(0);
    Unicode::snprintf(LightTextBuffer, LIGHTTEXT_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID27).getText());
    LightText.setWildcard(LightTextBuffer);
    LightText.resizeToCurrentText();
    LightText.setTypedText(touchgfx::TypedText(T_SINGLEUSEID17));

    LightBar.setXY(26, 128);
    LightBar.setProgressIndicatorPosition(2, 2, 180, 16);
    LightBar.setRange(0, 100);
    LightBar.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    LightBar.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_MEDIUM_PROGRESS_INDICATOR_BG_SQUARE_0_DEGREES_ID));
    LightBar.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 145, 255));
    LightBar.setValue(60);

    add(box1);
    add(boxWithBorder1);
    add(PreviousPageButton);
    add(NextPageButton);
    add(textArea1);
    add(LightText);
    add(LightBar);
}

void LightScreenViewBase::setupScreen()
{

}

void LightScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &PreviousPageButton)
    {
        //PreviousPageInteraction
        //When PreviousPageButton clicked change screen to TempScreen
        //Go to TempScreen with no screen transition
        application().gotoTempScreenScreenNoTransition();
    }
    else if (&src == &NextPageButton)
    {
        //NextPageInteraction
        //When NextPageButton clicked change screen to RGBScreen
        //Go to RGBScreen with no screen transition
        application().gotoRGBScreenScreenNoTransition();
    }
}
