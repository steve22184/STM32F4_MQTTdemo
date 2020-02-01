/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef RGBSCREENVIEWBASE_HPP
#define RGBSCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/rgbscreen_screen/RGBScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/Slider.hpp>

class RGBScreenViewBase : public touchgfx::View<RGBScreenPresenter>
{
public:
    RGBScreenViewBase();
    virtual ~RGBScreenViewBase() {}
    virtual void setupScreen();
    virtual void afterTransition();

    /*
     * Virtual Action Handlers
     */
    virtual void SetRGB()
    {
        // Override and implement this function in RGBScreen
    }

    virtual void SetR(int value)
    {
        // Override and implement this function in RGBScreen
    }

    virtual void SetG(int value)
    {
        // Override and implement this function in RGBScreen
    }

    virtual void SetB(int value)
    {
        // Override and implement this function in RGBScreen
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box box1;
    touchgfx::BoxWithBorder boxWithBorder1;
    touchgfx::ButtonWithLabel PreviousPageButton;
    touchgfx::ButtonWithLabel NextPageButton;
    touchgfx::TextArea textArea1;
    touchgfx::Slider RedSlider;
    touchgfx::TextArea textArea1_1;
    touchgfx::Slider GreenSlider;
    touchgfx::TextArea textArea1_2;
    touchgfx::Slider BlueSlider;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<RGBScreenViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<RGBScreenViewBase, const touchgfx::Slider&, int> sliderValueChangedCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value);

};

#endif // RGBSCREENVIEWBASE_HPP
