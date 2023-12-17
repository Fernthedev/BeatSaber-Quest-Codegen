#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DropdownField)
namespace UnityEngine::UIElements {
class IGenericMenu;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class __DropdownField__PopupTextElement;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class __DropdownField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __DropdownField____c__DisplayClass38_0;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UIElements {
class __DropdownField__UxmlTraits;
}
namespace UnityEngine::UIElements {
struct __VisualElement__MeasureMode;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownField;
}
namespace UnityEngine::UIElements {
class __DropdownField__PopupTextElement;
}
namespace UnityEngine::UIElements {
class __DropdownField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __DropdownField__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __DropdownField____c__DisplayClass38_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DropdownField__PopupTextElement);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DropdownField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DropdownField__UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0);
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7129)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7129), inst: 397 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7054))
// CS Name: ::DropdownField::UxmlTraits*
class CORDL_TYPE __DropdownField__UxmlTraits : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__BaseField_1__UxmlTraits<::StringW>)]{};

/// @brief Field m_Index offset 0x80
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) ::UnityEngine::UIElements::UxmlIntAttributeDescription*  m_Index;

/// @brief Field m_Choices offset 0x88
 __declspec(property(get=__get_m_Choices, put=__set_m_Choices)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_Choices;

constexpr void __set_m_Index(::UnityEngine::UIElements::UxmlIntAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* __get_m_Index() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> __get_m_Index() const;

constexpr void __set_m_Choices(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_Choices() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_Choices() const;

/// @brief Method Init addr 0x2e288e4 size 0x17c virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::__DropdownField__UxmlTraits* New_ctor() ;

/// @brief Method .ctor addr 0x2e28a60 size 0xec virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__DropdownField__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DropdownField__UxmlTraits(__DropdownField__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DropdownField__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DropdownField__UxmlTraits(__DropdownField__UxmlTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DropdownField__UxmlTraits()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DropdownField__UxmlTraits, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::DropdownField
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7130), inst: 397 }), TypeDefinitionIndex(TypeDefinitionIndex(7130))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7057))
// CS Name: ::UnityEngine.UIElements::DropdownField*
class CORDL_TYPE DropdownField : public ::UnityEngine::UIElements::BaseField_1<::StringW> {
public:
// Declarations
using __c__DisplayClass38_0 = ::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0;

using PopupTextElement = ::UnityEngine::UIElements::__DropdownField__PopupTextElement;

using UxmlTraits = ::UnityEngine::UIElements::__DropdownField__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::__DropdownField__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x440};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x440 - sizeof(::UnityEngine::UIElements::BaseField_1<::StringW>)]{};

/// @brief Field m_Choices offset 0x408
 __declspec(property(get=__get_m_Choices, put=__set_m_Choices)) ::System::Collections::Generic::List_1<::StringW>*  m_Choices;

/// @brief Field m_TextElement offset 0x410
 __declspec(property(get=__get_m_TextElement, put=__set_m_TextElement)) ::UnityEngine::UIElements::TextElement*  m_TextElement;

/// @brief Field m_ArrowElement offset 0x418
 __declspec(property(get=__get_m_ArrowElement, put=__set_m_ArrowElement)) ::UnityEngine::UIElements::VisualElement*  m_ArrowElement;

/// @brief Field m_FormatSelectedValueCallback offset 0x420
 __declspec(property(get=__get_m_FormatSelectedValueCallback, put=__set_m_FormatSelectedValueCallback)) ::System::Func_2<::StringW,::StringW>*  m_FormatSelectedValueCallback;

/// @brief Field m_FormatListItemCallback offset 0x428
 __declspec(property(get=__get_m_FormatListItemCallback, put=__set_m_FormatListItemCallback)) ::System::Func_2<::StringW,::StringW>*  m_FormatListItemCallback;

/// @brief Field createMenuCallback offset 0x430
 __declspec(property(get=__get_createMenuCallback, put=__set_createMenuCallback)) ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*  createMenuCallback;

/// @brief Field m_Index offset 0x438
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_textElement)) ::UnityEngine::UIElements::TextElement*  textElement;

 __declspec(property(put=set_index)) int32_t  index;

 __declspec(property(put=set_choices)) ::System::Collections::Generic::List_1<::StringW>*  choices;

 __declspec(property(get=get_value, put=set_value)) ::StringW  value;

constexpr void __set_m_Choices(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get_m_Choices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get_m_Choices() const;

constexpr void __set_m_TextElement(::UnityEngine::UIElements::TextElement*  value) ;

constexpr ::UnityEngine::UIElements::TextElement* __get_m_TextElement() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextElement*> __get_m_TextElement() const;

constexpr void __set_m_ArrowElement(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_ArrowElement() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_ArrowElement() const;

constexpr void __set_m_FormatSelectedValueCallback(::System::Func_2<::StringW,::StringW>*  value) ;

constexpr ::System::Func_2<::StringW,::StringW>* __get_m_FormatSelectedValueCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW,::StringW>*> __get_m_FormatSelectedValueCallback() const;

constexpr void __set_m_FormatListItemCallback(::System::Func_2<::StringW,::StringW>*  value) ;

constexpr ::System::Func_2<::StringW,::StringW>* __get_m_FormatListItemCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW,::StringW>*> __get_m_FormatListItemCallback() const;

constexpr void __set_createMenuCallback(::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*  value) ;

constexpr ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* __get_createMenuCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*> __get_createMenuCallback() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

static inline void setStaticF_ussClassNameBasePopupField(::StringW  value) ;

static inline ::StringW getStaticF_ussClassNameBasePopupField() ;

static inline void setStaticF_textUssClassNameBasePopupField(::StringW  value) ;

static inline ::StringW getStaticF_textUssClassNameBasePopupField() ;

static inline void setStaticF_arrowUssClassNameBasePopupField(::StringW  value) ;

static inline ::StringW getStaticF_arrowUssClassNameBasePopupField() ;

static inline void setStaticF_labelUssClassNameBasePopupField(::StringW  value) ;

static inline ::StringW getStaticF_labelUssClassNameBasePopupField() ;

static inline void setStaticF_inputUssClassNameBasePopupField(::StringW  value) ;

static inline ::StringW getStaticF_inputUssClassNameBasePopupField() ;

static inline void setStaticF_ussClassNamePopupField(::StringW  value) ;

static inline ::StringW getStaticF_ussClassNamePopupField() ;

static inline void setStaticF_labelUssClassNamePopupField(::StringW  value) ;

static inline ::StringW getStaticF_labelUssClassNamePopupField() ;

static inline void setStaticF_inputUssClassNamePopupField(::StringW  value) ;

static inline ::StringW getStaticF_inputUssClassNamePopupField() ;

/// @brief Method get_textElement addr 0x2e27618 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::TextElement* get_textElement() ;

/// @brief Method GetValueToDisplay addr 0x2e27620 size 0x8c virtual false final false
inline ::StringW GetValueToDisplay() ;

/// @brief Method GetListItemToDisplay addr 0x2e276ac size 0xac virtual false final false
inline ::StringW GetListItemToDisplay(::StringW  value) ;

/// @brief Method set_index addr 0x2e27758 size 0x9c virtual false final false
inline void set_index(int32_t  value) ;

static inline ::UnityEngine::UIElements::DropdownField* New_ctor() ;

/// @brief Method .ctor addr 0x2e277f4 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::DropdownField* New_ctor(::StringW  label) ;

/// @brief Method .ctor addr 0x2e277fc size 0x2b8 virtual false final false
inline void _ctor(::StringW  label) ;

/// @brief Method AddMenuItems addr 0x2e27b0c size 0x308 virtual false final false
inline void AddMenuItems(::UnityEngine::UIElements::IGenericMenu*  menu) ;

/// @brief Method ChangeValueFromMenu addr 0x2e27e1c size 0x10 virtual false final false
inline void ChangeValueFromMenu(::StringW  menuItem) ;

/// @brief Method set_choices addr 0x2e27e2c size 0x70 virtual true final false
inline void set_choices(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method get_value addr 0x2e27e9c size 0x48 virtual true final false
inline ::StringW get_value() ;

/// @brief Method set_value addr 0x2e27ee4 size 0x84 virtual true final false
inline void set_value(::StringW  value) ;

/// @brief Method SetValueWithoutNotify addr 0x2e27f68 size 0x110 virtual true final false
inline void SetValueWithoutNotify(::StringW  newValue) ;

/// @brief Method ExecuteDefaultActionAtTarget addr 0x2e28078 size 0x180 virtual true final false
inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method ShowMenu addr 0x2e281f8 size 0x180 virtual false final false
inline void ShowMenu() ;

/// @brief Method UpdateMixedValueContent addr 0x2e2864c size 0xc0 virtual true final false
inline void UpdateMixedValueContent() ;

// Ctor Parameters [CppParam { name: "", ty: "DropdownField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DropdownField(DropdownField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DropdownField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DropdownField(DropdownField const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DropdownField()  = default;
public:


// Fields

// Static field ussClassNameBasePopupField

// Static field textUssClassNameBasePopupField

// Static field arrowUssClassNameBasePopupField

// Static field labelUssClassNameBasePopupField

// Static field inputUssClassNameBasePopupField

// Static field ussClassNamePopupField

// Static field labelUssClassNamePopupField

// Static field inputUssClassNamePopupField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownField, 0x440>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7057)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5259 }), TypeDefinitionIndex(TypeDefinitionIndex(7054)), TypeDefinitionIndex(TypeDefinitionIndex(6997))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7053))
// CS Name: ::DropdownField::UxmlFactory*
class CORDL_TYPE __DropdownField__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::DropdownField*,::UnityEngine::UIElements::__DropdownField__UxmlTraits*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::DropdownField*,::UnityEngine::UIElements::__DropdownField__UxmlTraits*>)]{};

static inline ::UnityEngine::UIElements::__DropdownField__UxmlFactory* New_ctor() ;

/// @brief Method .ctor addr 0x2e2889c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__DropdownField__UxmlFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DropdownField__UxmlFactory(__DropdownField__UxmlFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DropdownField__UxmlFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DropdownField__UxmlFactory(__DropdownField__UxmlFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DropdownField__UxmlFactory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DropdownField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::PopupTextElement
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6814))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7055))
// CS Name: ::DropdownField::PopupTextElement*
class CORDL_TYPE __DropdownField__PopupTextElement : public ::UnityEngine::UIElements::TextElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x478};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x478 - sizeof(::UnityEngine::UIElements::TextElement)]{};

/// @brief Method DoMeasure addr 0x2e28b4c size 0xa4 virtual true final false
inline ::UnityEngine::Vector2 DoMeasure(float_t  desiredWidth, ::UnityEngine::UIElements::__VisualElement__MeasureMode  widthMode, float_t  desiredHeight, ::UnityEngine::UIElements::__VisualElement__MeasureMode  heightMode) ;

static inline ::UnityEngine::UIElements::__DropdownField__PopupTextElement* New_ctor() ;

/// @brief Method .ctor addr 0x2e27ab4 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__DropdownField__PopupTextElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DropdownField__PopupTextElement(__DropdownField__PopupTextElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DropdownField__PopupTextElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DropdownField__PopupTextElement(__DropdownField__PopupTextElement const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DropdownField__PopupTextElement()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DropdownField__PopupTextElement, 0x478>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::<>c__DisplayClass38_0
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7056))
// CS Name: ::DropdownField::<>c__DisplayClass38_0*
class CORDL_TYPE __DropdownField____c__DisplayClass38_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field item offset 0x10
 __declspec(property(get=__get_item, put=__set_item)) ::StringW  item;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::UnityEngine::UIElements::DropdownField*  __4__this;

constexpr void __set_item(::StringW  value) ;

constexpr ::StringW& __get_item() ;

constexpr ::StringW const& __get_item() const;

constexpr void __set___4__this(::UnityEngine::UIElements::DropdownField*  value) ;

constexpr ::UnityEngine::UIElements::DropdownField* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DropdownField*> __get___4__this() const;

static inline ::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0* New_ctor() ;

/// @brief Method .ctor addr 0x2e27e14 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <AddMenuItems>b__0 addr 0x2e28bf0 size 0x2c virtual false final false
inline void _AddMenuItems_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__DropdownField____c__DisplayClass38_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DropdownField____c__DisplayClass38_0(__DropdownField____c__DisplayClass38_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DropdownField____c__DisplayClass38_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DropdownField____c__DisplayClass38_0(__DropdownField____c__DisplayClass38_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DropdownField____c__DisplayClass38_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DropdownField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownField*, "UnityEngine.UIElements", "DropdownField");
NEED_NO_BOX(::UnityEngine::UIElements::__DropdownField__PopupTextElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DropdownField__PopupTextElement*, "UnityEngine.UIElements", "DropdownField/PopupTextElement");
NEED_NO_BOX(::UnityEngine::UIElements::__DropdownField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DropdownField__UxmlFactory*, "UnityEngine.UIElements", "DropdownField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__DropdownField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DropdownField__UxmlTraits*, "UnityEngine.UIElements", "DropdownField/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0*, "UnityEngine.UIElements", "DropdownField/<>c__DisplayClass38_0");
