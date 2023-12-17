#pragma once
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextInputBaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextInputBaseField_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleResolvedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextHandle_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEngine_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextInputField_def.hpp"
#include "UnityEngine/zzzz__RectOffset_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextualMenuPopulateEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__set_m_MaxLength(::UnityEngine::UIElements::UxmlIntAttributeDescription*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlIntAttributeDescription*, 0x88>(this, std::forward<::UnityEngine::UIElements::UxmlIntAttributeDescription*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__get_m_MaxLength()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlIntAttributeDescription*, 0x88>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__get_m_MaxLength() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlIntAttributeDescription*, 0x88>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__set_m_Password(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, 0x90>(this, std::forward<::UnityEngine::UIElements::UxmlBoolAttributeDescription*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__get_m_Password()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, 0x90>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__get_m_Password() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, 0x90>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__set_m_MaskCharacter(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, 0x98>(this, std::forward<::UnityEngine::UIElements::UxmlStringAttributeDescription*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__get_m_MaskCharacter()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, 0x98>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__get_m_MaskCharacter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, 0x98>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, 0xa0>(this, std::forward<::UnityEngine::UIElements::UxmlStringAttributeDescription*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__get_m_Text()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, 0xa0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__get_m_Text() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, 0xa0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__set_m_IsReadOnly(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, 0xa8>(this, std::forward<::UnityEngine::UIElements::UxmlBoolAttributeDescription*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__get_m_IsReadOnly()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, 0xa8>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__get_m_IsReadOnly() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, 0xa8>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__set_m_IsDelayed(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, 0xb0>(this, std::forward<::UnityEngine::UIElements::UxmlBoolAttributeDescription*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__get_m_IsDelayed()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, 0xb0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__get_m_IsDelayed() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, 0xb0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ve, bag, cc);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>* UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::UIElements::ITextInputField"
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr  UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::operator ::UnityEngine::UIElements::ITextInputField*() noexcept {
return static_cast<::UnityEngine::UIElements::ITextInputField*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IEventHandler"
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr  UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::operator ::UnityEngine::UIElements::IEventHandler*() noexcept {
return static_cast<::UnityEngine::UIElements::IEventHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::ITextElement"
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr  UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::operator ::UnityEngine::UIElements::ITextElement*() noexcept {
return static_cast<::UnityEngine::UIElements::ITextElement*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set_m_OriginalText(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x3b0>(this, std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::StringW& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get_m_OriginalText()  {
return ::cordl_internals::getInstanceField<::StringW, 0x3b0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::StringW const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get_m_OriginalText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x3b0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set__isReadOnly_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3b8>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__isReadOnly_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x3b8>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__isReadOnly_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x3b8>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set__maxLength_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3bc>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr int32_t& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__maxLength_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3bc>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr int32_t const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__maxLength_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3bc>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set__maskChar_k__BackingField(char16_t  value)  {
::cordl_internals::setInstanceField<char16_t, 0x3c0>(this, std::forward<char16_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr char16_t& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__maskChar_k__BackingField()  {
return ::cordl_internals::getInstanceField<char16_t, 0x3c0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr char16_t const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__maskChar_k__BackingField() const {
return ::cordl_internals::getInstanceField<char16_t, 0x3c0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set__isPasswordField_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c2>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__isPasswordField_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x3c2>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__isPasswordField_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x3c2>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set__doubleClickSelectsWord_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c3>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__doubleClickSelectsWord_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x3c3>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__doubleClickSelectsWord_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x3c3>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set__tripleClickSelectsLine_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c4>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__tripleClickSelectsLine_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x3c4>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__tripleClickSelectsLine_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x3c4>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set__isDelayed_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c5>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__isDelayed_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x3c5>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__isDelayed_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x3c5>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set__isDragging_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c6>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__isDragging_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x3c6>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__isDragging_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x3c6>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set_m_TouchScreenTextFieldInitialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c7>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get_m_TouchScreenTextFieldInitialized()  {
return ::cordl_internals::getInstanceField<bool, 0x3c7>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get_m_TouchScreenTextFieldInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0x3c7>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set_m_HardwareKeyboardPoller(::UnityEngine::UIElements::IVisualElementScheduledItem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::IVisualElementScheduledItem*, 0x3c8>(this, std::forward<::UnityEngine::UIElements::IVisualElementScheduledItem*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get_m_HardwareKeyboardPoller()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IVisualElementScheduledItem*, 0x3c8>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get_m_HardwareKeyboardPoller() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IVisualElementScheduledItem*, 0x3c8>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set_m_SelectionColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x3d0>(this, std::forward<::UnityEngine::Color>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::Color& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get_m_SelectionColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x3d0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::Color const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get_m_SelectionColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x3d0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set_m_CursorColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x3e0>(this, std::forward<::UnityEngine::Color>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::Color& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get_m_CursorColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x3e0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::Color const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get_m_CursorColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x3e0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set__editorEventHandler_k__BackingField(::UnityEngine::UIElements::TextEditorEventHandler*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::TextEditorEventHandler*, 0x3f0>(this, std::forward<::UnityEngine::UIElements::TextEditorEventHandler*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::TextEditorEventHandler* UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__editorEventHandler_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextEditorEventHandler*, 0x3f0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextEditorEventHandler*> UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__editorEventHandler_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextEditorEventHandler*, 0x3f0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set__editorEngine_k__BackingField(::UnityEngine::UIElements::TextEditorEngine*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::TextEditorEngine*, 0x3f8>(this, std::forward<::UnityEngine::UIElements::TextEditorEngine*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::TextEditorEngine* UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__editorEngine_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextEditorEngine*, 0x3f8>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextEditorEngine*> UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get__editorEngine_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextEditorEngine*, 0x3f8>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set_m_TextHandle(::UnityEngine::UIElements::ITextHandle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ITextHandle*, 0x400>(this, std::forward<::UnityEngine::UIElements::ITextHandle*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::ITextHandle* UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get_m_TextHandle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ITextHandle*, 0x400>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ITextHandle*> UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get_m_TextHandle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ITextHandle*, 0x400>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__set_m_Text(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x408>(this, std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::StringW& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get_m_Text()  {
return ::cordl_internals::getInstanceField<::StringW, 0x408>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::StringW const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__get_m_Text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x408>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::ResetValueAndText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "ResetValueAndText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::SaveValueAndText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "SaveValueAndText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::RestoreValueAndText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "RestoreValueAndText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::UpdateText(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "UpdateText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline TValueType UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::StringToValue(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "StringToValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValueType, false>(*this, ___internal_method, str);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::UpdateValueFromText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "UpdateValueFromText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::UnityEngine_UIElements_ITextInputField_get_isReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "UnityEngine.UIElements.ITextInputField.get_isReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_isReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_isReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_isReadOnly(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "set_isReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline int32_t UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_maxLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_maxLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_maxLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "set_maxLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline char16_t UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_maskChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_maskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_maskChar(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "set_maskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_isPasswordField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_isPasswordField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_isPasswordField(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "set_isPasswordField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_doubleClickSelectsWord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_doubleClickSelectsWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_doubleClickSelectsWord(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "set_doubleClickSelectsWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_tripleClickSelectsLine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_tripleClickSelectsLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_tripleClickSelectsLine(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "set_tripleClickSelectsLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_isDelayed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_isDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_isDelayed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "set_isDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_isDragging()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_isDragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_touchScreenTextField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_touchScreenTextField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_touchScreenTextFieldChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_touchScreenTextFieldChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::Color UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_selectionColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::Color UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_cursorColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_cursorColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_hasFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_hasFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::TextEditorEventHandler* UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_editorEventHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_editorEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextEditorEventHandler*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_editorEventHandler(::UnityEngine::UIElements::TextEditorEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "set_editorEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextEditorEventHandler*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::TextEditorEngine* UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_editorEngine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_editorEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextEditorEngine*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_editorEngine(::UnityEngine::UIElements::TextEditorEngine*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "set_editorEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextEditorEngine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::InitTextEditorEventHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "InitTextEditorEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::__DropdownMenuAction__Status UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::CutActionStatus(::UnityEngine::UIElements::DropdownMenuAction*  a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "CutActionStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__DropdownMenuAction__Status, false>(*this, ___internal_method, a);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::__DropdownMenuAction__Status UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::CopyActionStatus(::UnityEngine::UIElements::DropdownMenuAction*  a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "CopyActionStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__DropdownMenuAction__Status, false>(*this, ___internal_method, a);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::__DropdownMenuAction__Status UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::PasteActionStatus(::UnityEngine::UIElements::DropdownMenuAction*  a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "PasteActionStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__DropdownMenuAction__Status, false>(*this, ___internal_method, a);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::ProcessMenuCommand(::StringW  command)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "ProcessMenuCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, command);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::Cut(::UnityEngine::UIElements::DropdownMenuAction*  a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "Cut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, a);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::Copy(::UnityEngine::UIElements::DropdownMenuAction*  a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "Copy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, a);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::Paste(::UnityEngine::UIElements::DropdownMenuAction*  a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "Paste",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, a);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::OnInputCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "OnInputCustomStyleResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent*  attachEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, attachEvent);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::SyncTextEngine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "SyncTextEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::CullString(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "CullString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, s);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext*  mgc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "OnGenerateVisualContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mgc);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::DrawWithTextSelectionAndCursor(::UnityEngine::UIElements::MeshGenerationContext*  mgc, ::StringW  newText, float_t  pixelsPerPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "DrawWithTextSelectionAndCursor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mgc, newText, pixelsPerPoint);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::AcceptCharacter(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "AcceptCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, c);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::BuildContextualMenu(::UnityEngine::UIElements::ContextualMenuPopulateEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "BuildContextualMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::OnDetectFocusChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "OnDetectFocusChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::OnCursorIndexChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "OnCursorIndexChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::Vector2 UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::DoMeasure(float_t  desiredWidth, ::UnityEngine::UIElements::__VisualElement__MeasureMode  widthMode, float_t  desiredHeight, ::UnityEngine::UIElements::__VisualElement__MeasureMode  heightMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "DoMeasure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElement__MeasureMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElement__MeasureMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method, desiredWidth, widthMode, desiredHeight, heightMode);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::ExecuteDefaultActionDisabledAtTarget(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "ExecuteDefaultActionDisabledAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "ExecuteDefaultActionAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::ProcessEventAtTarget(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "ProcessEventAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::ExecuteDefaultAction(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "ExecuteDefaultAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::UnityEngine_UIElements_ITextInputField_get_hasFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "UnityEngine.UIElements.ITextInputField.get_hasFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::UnityEngine_UIElements_ITextInputField_SyncTextEngine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "UnityEngine.UIElements.ITextInputField.SyncTextEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::UnityEngine_UIElements_ITextInputField_AcceptCharacter(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "UnityEngine.UIElements.ITextInputField.AcceptCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, c);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::UnityEngine_UIElements_ITextInputField_CullString(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "UnityEngine.UIElements.ITextInputField.CullString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, s);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::UnityEngine_UIElements_ITextInputField_UpdateText(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "UnityEngine.UIElements.ITextInputField.UpdateText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::TextEditorEngine* UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::UnityEngine_UIElements_ITextInputField_get_editorEngine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "UnityEngine.UIElements.ITextInputField.get_editorEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextEditorEngine*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::UnityEngine_UIElements_ITextInputField_get_isDelayed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "UnityEngine.UIElements.ITextInputField.get_isDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::UnityEngine_UIElements_ITextInputField_UpdateValueFromText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "UnityEngine.UIElements.ITextInputField.UpdateValueFromText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::DeferGUIStyleRectSync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "DeferGUIStyleRectSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::OnPercentResolved(::UnityEngine::UIElements::GeometryChangedEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "OnPercentResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::SyncGUIStyle(::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*  textInput, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "SyncGUIStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, textInput, style);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::IsLayoutUsingPercent(::UnityEngine::UIElements::VisualElement*  ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "IsLayoutUsingPercent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ve);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::AssignRect(::UnityEngine::RectOffset*  rect, int32_t  left, int32_t  top, int32_t  right, int32_t  bottom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "AssignRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, left, top, right, bottom);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::_ProcessEventAtTarget_b__97_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                            "<ProcessEventAtTarget>b__97_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_s_SelectionColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_SelectionColorProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_s_SelectionColorProperty()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_SelectionColorProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_s_CursorColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_CursorColorProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_s_CursorColorProperty()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_CursorColorProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__set_m_VisualInputTabIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x404>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr int32_t& UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__get_m_VisualInputTabIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x404>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr int32_t const& UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__get_m_VisualInputTabIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x404>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__set_m_TextInputBase(::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*, 0x408>(this, std::forward<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__get_m_TextInputBase()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*, 0x408>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*> UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__get_m_TextInputBase() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*, 0x408>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__set__iTextHandle_k__BackingField(::UnityEngine::UIElements::ITextHandle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ITextHandle*, 0x410>(this, std::forward<::UnityEngine::UIElements::ITextHandle*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::ITextHandle* UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__get__iTextHandle_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ITextHandle*, 0x410>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ITextHandle*> UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__get__iTextHandle_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ITextHandle*, 0x410>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_ussClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_labelUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_labelUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_inputUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_inputUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_singleLineInputUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "singleLineInputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_singleLineInputUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "singleLineInputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_multilineInputUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "multilineInputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_multilineInputUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "multilineInputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_textInputUssName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "textInputUssName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_textInputUssName()  {
return ::cordl_internals::getStaticField<::StringW, "textInputUssName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__set_onIsReadOnlyChanged(::System::Action_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<bool>*, 0x418>(this, std::forward<::System::Action_1<bool>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::System::Action_1<bool>* UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__get_onIsReadOnlyChanged()  {
return ::cordl_internals::getInstanceField<::System::Action_1<bool>*, 0x418>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__get_onIsReadOnlyChanged() const {
return ::cordl_internals::getInstanceField<::System::Action_1<bool>*, 0x418>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_textInputBase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(),
                            "get_textInputBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_iTextHandle(::UnityEngine::UIElements::ITextHandle*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(),
                            "set_iTextHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_isReadOnly(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(),
                            "set_isReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_isPasswordField(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(),
                            "set_isPasswordField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_maxLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(),
                            "set_maxLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_isDelayed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(),
                            "get_isDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_isDelayed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(),
                            "set_isDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_maskChar(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(),
                            "set_maskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>* UnityEngine::UIElements::TextInputBaseField_1<TValueType>::New_ctor(::StringW  label, int32_t  maxLength, char16_t  maskChar, ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*  textInputBase)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(label, maxLength, maskChar, textInputBase));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::_ctor(::StringW  label, int32_t  maxLength, char16_t  maskChar, ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*  textInputBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, label, maxLength, maskChar, textInputBase);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::OnFieldCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(),
                            "OnFieldCustomStyleResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(),
                            "ExecuteDefaultActionAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::UpdateMixedValueContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(),
                            "UpdateMixedValueContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
