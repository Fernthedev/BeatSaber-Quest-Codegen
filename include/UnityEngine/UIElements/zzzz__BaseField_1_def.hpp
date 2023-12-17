#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseField_1)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
template<typename T>
class INotifyValueChanged_1;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
template<typename T>
struct CustomStyleProperty_1;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements {
template<typename TValueType>
class __BaseField_1__UxmlTraits;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename TValueType>
class BaseField_1;
}
namespace UnityEngine::UIElements {
template<typename TValueType>
class __BaseField_1__UxmlTraits;
}
namespace UnityEngine::UIElements {
template<>
class BaseField_1<::UnityEngine::Vector2>;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type TValueType>
class BaseField_1<TValueType>;
}
namespace UnityEngine::UIElements {
template<>
class BaseField_1<bool>;
}
namespace UnityEngine::UIElements {
template<>
class BaseField_1<float_t>;
}
namespace UnityEngine::UIElements {
template<>
class BaseField_1<int32_t>;
}
namespace UnityEngine::UIElements {
template<>
class __BaseField_1__UxmlTraits<::UnityEngine::Vector2>;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type TValueType>
class __BaseField_1__UxmlTraits<TValueType>;
}
namespace UnityEngine::UIElements {
template<>
class __BaseField_1__UxmlTraits<bool>;
}
namespace UnityEngine::UIElements {
template<>
class __BaseField_1__UxmlTraits<float_t>;
}
namespace UnityEngine::UIElements {
template<>
class __BaseField_1__UxmlTraits<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::BaseField_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__BaseField_1__UxmlTraits);
// Type: ::UxmlTraits
// Type: UnityEngine.UIElements::BaseField`1
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7129)), TypeDefinitionIndex(TypeDefinitionIndex(6800))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7129), inst: 411 })
// CS Name: ::BaseField`1::UxmlTraits<TValueType>*
class CORDL_TYPE __BaseField_1__UxmlTraits<::UnityEngine::Vector2> : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::UnityEngine::UIElements::__BindableElement__UxmlTraits)]{};

/// @brief Field m_Label offset 0x78
 __declspec(property(get=__get_m_Label, put=__set_m_Label)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_Label;

constexpr void __set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_Label() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_Label() const;

static inline ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<::UnityEngine::Vector2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Method ParseChoiceList addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::List_1<::StringW>* ParseChoiceList(::StringW  choicesFromBag) ;

// Ctor Parameters [CppParam { name: "", ty: "__BaseField_1__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BaseField_1__UxmlTraits(__BaseField_1__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BaseField_1__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BaseField_1__UxmlTraits(__BaseField_1__UxmlTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BaseField_1__UxmlTraits()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6800)), TypeDefinitionIndex(TypeDefinitionIndex(7129))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7129), inst: 391 })
// CS Name: ::BaseField`1::UxmlTraits<TValueType>*
class CORDL_TYPE __BaseField_1__UxmlTraits<float_t> : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::UnityEngine::UIElements::__BindableElement__UxmlTraits)]{};

/// @brief Field m_Label offset 0x78
 __declspec(property(get=__get_m_Label, put=__set_m_Label)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_Label;

constexpr void __set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_Label() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_Label() const;

static inline ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Method ParseChoiceList addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::List_1<::StringW>* ParseChoiceList(::StringW  choicesFromBag) ;

// Ctor Parameters [CppParam { name: "", ty: "__BaseField_1__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BaseField_1__UxmlTraits(__BaseField_1__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BaseField_1__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BaseField_1__UxmlTraits(__BaseField_1__UxmlTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BaseField_1__UxmlTraits()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6800)), TypeDefinitionIndex(TypeDefinitionIndex(7129))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7129), inst: 105 })
// CS Name: ::BaseField`1::UxmlTraits<TValueType>*
class CORDL_TYPE __BaseField_1__UxmlTraits<bool> : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::UnityEngine::UIElements::__BindableElement__UxmlTraits)]{};

/// @brief Field m_Label offset 0x78
 __declspec(property(get=__get_m_Label, put=__set_m_Label)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_Label;

constexpr void __set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_Label() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_Label() const;

static inline ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Method ParseChoiceList addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::List_1<::StringW>* ParseChoiceList(::StringW  choicesFromBag) ;

// Ctor Parameters [CppParam { name: "", ty: "__BaseField_1__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BaseField_1__UxmlTraits(__BaseField_1__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BaseField_1__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BaseField_1__UxmlTraits(__BaseField_1__UxmlTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BaseField_1__UxmlTraits()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6800)), TypeDefinitionIndex(TypeDefinitionIndex(7129))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7129), inst: 98 })
// CS Name: ::BaseField`1::UxmlTraits<TValueType>*
class CORDL_TYPE __BaseField_1__UxmlTraits<int32_t> : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::UnityEngine::UIElements::__BindableElement__UxmlTraits)]{};

/// @brief Field m_Label offset 0x78
 __declspec(property(get=__get_m_Label, put=__set_m_Label)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_Label;

constexpr void __set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_Label() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_Label() const;

static inline ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Method ParseChoiceList addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::List_1<::StringW>* ParseChoiceList(::StringW  choicesFromBag) ;

// Ctor Parameters [CppParam { name: "", ty: "__BaseField_1__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BaseField_1__UxmlTraits(__BaseField_1__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BaseField_1__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BaseField_1__UxmlTraits(__BaseField_1__UxmlTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BaseField_1__UxmlTraits()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValueType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7129)), TypeDefinitionIndex(TypeDefinitionIndex(6800))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7129), inst: 2 })
// CS Name: ::BaseField`1::UxmlTraits<TValueType>*
class CORDL_TYPE __BaseField_1__UxmlTraits<TValueType> : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::UnityEngine::UIElements::__BindableElement__UxmlTraits)]{};

/// @brief Field m_Label offset 0x78
 __declspec(property(get=__get_m_Label, put=__set_m_Label)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_Label;

constexpr void __set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_Label() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_Label() const;

static inline ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Method ParseChoiceList addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::List_1<::StringW>* ParseChoiceList(::StringW  choicesFromBag) ;

// Ctor Parameters [CppParam { name: "", ty: "__BaseField_1__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BaseField_1__UxmlTraits(__BaseField_1__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BaseField_1__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BaseField_1__UxmlTraits(__BaseField_1__UxmlTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BaseField_1__UxmlTraits()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseField`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7130)), TypeDefinitionIndex(TypeDefinitionIndex(6801))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7130), inst: 411 })
// CS Name: ::UnityEngine.UIElements::BaseField`1<TValueType>*
class CORDL_TYPE BaseField_1<::UnityEngine::Vector2> : public ::UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<::UnityEngine::Vector2>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x408};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x408 - sizeof(::UnityEngine::UIElements::BindableElement)]{};

/// @brief Field m_LabelWidthRatio offset 0x3c0
 __declspec(property(get=__get_m_LabelWidthRatio, put=__set_m_LabelWidthRatio)) float_t  m_LabelWidthRatio;

/// @brief Field m_LabelExtraPadding offset 0x3c4
 __declspec(property(get=__get_m_LabelExtraPadding, put=__set_m_LabelExtraPadding)) float_t  m_LabelExtraPadding;

/// @brief Field m_LabelBaseMinWidth offset 0x3c8
 __declspec(property(get=__get_m_LabelBaseMinWidth, put=__set_m_LabelBaseMinWidth)) float_t  m_LabelBaseMinWidth;

/// @brief Field m_VisualInput offset 0x3d0
 __declspec(property(get=__get_m_VisualInput, put=__set_m_VisualInput)) ::UnityEngine::UIElements::VisualElement*  m_VisualInput;

/// @brief Field m_Value offset 0x3d8
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) ::UnityEngine::Vector2  m_Value;

/// @brief Field <labelElement>k__BackingField offset 0x3e0
 __declspec(property(get=__get__labelElement_k__BackingField, put=__set__labelElement_k__BackingField)) ::UnityEngine::UIElements::Label*  _labelElement_k__BackingField;

/// @brief Field m_ShowMixedValue offset 0x3e8
 __declspec(property(get=__get_m_ShowMixedValue, put=__set_m_ShowMixedValue)) bool  m_ShowMixedValue;

/// @brief Field m_MixedValueLabel offset 0x3f0
 __declspec(property(get=__get_m_MixedValueLabel, put=__set_m_MixedValueLabel)) ::UnityEngine::UIElements::Label*  m_MixedValueLabel;

/// @brief Field m_CachedInspectorElement offset 0x3f8
 __declspec(property(get=__get_m_CachedInspectorElement, put=__set_m_CachedInspectorElement)) ::UnityEngine::UIElements::VisualElement*  m_CachedInspectorElement;

/// @brief Field m_CachedListAndFoldoutDepth offset 0x400
 __declspec(property(get=__get_m_CachedListAndFoldoutDepth, put=__set_m_CachedListAndFoldoutDepth)) int32_t  m_CachedListAndFoldoutDepth;

 __declspec(property(get=get_visualInput, put=set_visualInput)) ::UnityEngine::UIElements::VisualElement*  visualInput;

 __declspec(property(get=get_rawValue, put=set_rawValue)) ::UnityEngine::Vector2  rawValue;

 __declspec(property(get=get_value, put=set_value)) ::UnityEngine::Vector2  value;

 __declspec(property(get=get_labelElement, put=set_labelElement)) ::UnityEngine::UIElements::Label*  labelElement;

 __declspec(property(get=get_label, put=set_label)) ::StringW  label;

 __declspec(property(get=get_showMixedValue)) bool  showMixedValue;

 __declspec(property(get=get_mixedValueLabel)) ::UnityEngine::UIElements::Label*  mixedValueLabel;

/// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<::UnityEngine::Vector2>"
constexpr operator  ::UnityEngine::UIElements::INotifyValueChanged_1<::UnityEngine::Vector2>*() noexcept;

static inline void setStaticF_ussClassName(::StringW  value) ;

static inline ::StringW getStaticF_ussClassName() ;

static inline void setStaticF_labelUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_labelUssClassName() ;

static inline void setStaticF_inputUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_inputUssClassName() ;

static inline void setStaticF_noLabelVariantUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_noLabelVariantUssClassName() ;

static inline void setStaticF_labelDraggerVariantUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_labelDraggerVariantUssClassName() ;

static inline void setStaticF_mixedValueLabelUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_mixedValueLabelUssClassName() ;

static inline void setStaticF_alignedFieldUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_alignedFieldUssClassName() ;

static inline void setStaticF_inspectorFieldUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_inspectorFieldUssClassName() ;

static inline void setStaticF_mixedValueString(::StringW  value) ;

static inline ::StringW getStaticF_mixedValueString() ;

static inline void setStaticF_serializedPropertyCopyName(::UnityEngine::PropertyName  value) ;

static inline ::UnityEngine::PropertyName getStaticF_serializedPropertyCopyName() ;

static inline void setStaticF_s_LabelWidthRatioProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelWidthRatioProperty() ;

static inline void setStaticF_s_LabelExtraPaddingProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelExtraPaddingProperty() ;

static inline void setStaticF_s_LabelBaseMinWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelBaseMinWidthProperty() ;

constexpr void __set_m_LabelWidthRatio(float_t  value) ;

constexpr float_t& __get_m_LabelWidthRatio() ;

constexpr float_t const& __get_m_LabelWidthRatio() const;

constexpr void __set_m_LabelExtraPadding(float_t  value) ;

constexpr float_t& __get_m_LabelExtraPadding() ;

constexpr float_t const& __get_m_LabelExtraPadding() const;

constexpr void __set_m_LabelBaseMinWidth(float_t  value) ;

constexpr float_t& __get_m_LabelBaseMinWidth() ;

constexpr float_t const& __get_m_LabelBaseMinWidth() const;

constexpr void __set_m_VisualInput(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_VisualInput() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_VisualInput() const;

constexpr void __set_m_Value(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_Value() ;

constexpr ::UnityEngine::Vector2 const& __get_m_Value() const;

constexpr void __set__labelElement_k__BackingField(::UnityEngine::UIElements::Label*  value) ;

constexpr ::UnityEngine::UIElements::Label* __get__labelElement_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> __get__labelElement_k__BackingField() const;

constexpr void __set_m_ShowMixedValue(bool  value) ;

constexpr bool& __get_m_ShowMixedValue() ;

constexpr bool const& __get_m_ShowMixedValue() const;

constexpr void __set_m_MixedValueLabel(::UnityEngine::UIElements::Label*  value) ;

constexpr ::UnityEngine::UIElements::Label* __get_m_MixedValueLabel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> __get_m_MixedValueLabel() const;

constexpr void __set_m_CachedInspectorElement(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_CachedInspectorElement() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_CachedInspectorElement() const;

constexpr void __set_m_CachedListAndFoldoutDepth(int32_t  value) ;

constexpr int32_t& __get_m_CachedListAndFoldoutDepth() ;

constexpr int32_t const& __get_m_CachedListAndFoldoutDepth() const;

/// @brief Method get_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::VisualElement* get_visualInput() ;

/// @brief Method set_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_visualInput(::UnityEngine::UIElements::VisualElement*  value) ;

/// @brief Method get_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector2 get_rawValue() ;

/// @brief Method set_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_rawValue(::UnityEngine::Vector2  value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Vector2 get_value() ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
inline void set_value(::UnityEngine::Vector2  value) ;

/// @brief Method get_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Label* get_labelElement() ;

/// @brief Method set_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_labelElement(::UnityEngine::UIElements::Label*  value) ;

/// @brief Method get_label addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_label() ;

/// @brief Method set_label addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_label(::StringW  value) ;

/// @brief Method get_showMixedValue addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_showMixedValue() ;

/// @brief Method get_mixedValueLabel addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Label* get_mixedValueLabel() ;

static inline ::UnityEngine::UIElements::BaseField_1<::UnityEngine::Vector2>* New_ctor(::StringW  label) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  label) ;

static inline ::UnityEngine::UIElements::BaseField_1<::UnityEngine::Vector2>* New_ctor(::StringW  label, ::UnityEngine::UIElements::VisualElement*  visualInput) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  label, ::UnityEngine::UIElements::VisualElement*  visualInput) ;

/// @brief Method OnAttachToPanel addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent*  e) ;

/// @brief Method OnCustomStyleResolved addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent*  evt) ;

/// @brief Method OnInspectorFieldGeometryChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent*  e) ;

/// @brief Method AlignLabel addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AlignLabel() ;

/// @brief Method UpdateMixedValueContent addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateMixedValueContent() ;

/// @brief Method SetValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SetValueWithoutNotify(::UnityEngine::Vector2  newValue) ;

/// @brief Method OnViewDataReady addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnViewDataReady() ;

/// @brief Method GetTooltipRect addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Rect GetTooltipRect() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseField_1(BaseField_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseField_1(BaseField_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseField_1()  = default;
public:


// Fields

// Static field ussClassName

// Static field labelUssClassName

// Static field inputUssClassName

// Static field noLabelVariantUssClassName

// Static field labelDraggerVariantUssClassName

// Static field mixedValueLabelUssClassName

// Static field alignedFieldUssClassName

// Static field inspectorFieldUssClassName

// Static field mixedValueString

// Static field serializedPropertyCopyName

// Static field s_LabelWidthRatioProperty

// Static field s_LabelExtraPaddingProperty

// Static field s_LabelBaseMinWidthProperty


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseField`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7130)), TypeDefinitionIndex(TypeDefinitionIndex(6801))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7130), inst: 391 })
// CS Name: ::UnityEngine.UIElements::BaseField`1<TValueType>*
class CORDL_TYPE BaseField_1<float_t> : public ::UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<float_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x408};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x408 - sizeof(::UnityEngine::UIElements::BindableElement)]{};

/// @brief Field m_LabelWidthRatio offset 0x3c0
 __declspec(property(get=__get_m_LabelWidthRatio, put=__set_m_LabelWidthRatio)) float_t  m_LabelWidthRatio;

/// @brief Field m_LabelExtraPadding offset 0x3c4
 __declspec(property(get=__get_m_LabelExtraPadding, put=__set_m_LabelExtraPadding)) float_t  m_LabelExtraPadding;

/// @brief Field m_LabelBaseMinWidth offset 0x3c8
 __declspec(property(get=__get_m_LabelBaseMinWidth, put=__set_m_LabelBaseMinWidth)) float_t  m_LabelBaseMinWidth;

/// @brief Field m_VisualInput offset 0x3d0
 __declspec(property(get=__get_m_VisualInput, put=__set_m_VisualInput)) ::UnityEngine::UIElements::VisualElement*  m_VisualInput;

/// @brief Field m_Value offset 0x3d8
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) float_t  m_Value;

/// @brief Field <labelElement>k__BackingField offset 0x3e0
 __declspec(property(get=__get__labelElement_k__BackingField, put=__set__labelElement_k__BackingField)) ::UnityEngine::UIElements::Label*  _labelElement_k__BackingField;

/// @brief Field m_ShowMixedValue offset 0x3e8
 __declspec(property(get=__get_m_ShowMixedValue, put=__set_m_ShowMixedValue)) bool  m_ShowMixedValue;

/// @brief Field m_MixedValueLabel offset 0x3f0
 __declspec(property(get=__get_m_MixedValueLabel, put=__set_m_MixedValueLabel)) ::UnityEngine::UIElements::Label*  m_MixedValueLabel;

/// @brief Field m_CachedInspectorElement offset 0x3f8
 __declspec(property(get=__get_m_CachedInspectorElement, put=__set_m_CachedInspectorElement)) ::UnityEngine::UIElements::VisualElement*  m_CachedInspectorElement;

/// @brief Field m_CachedListAndFoldoutDepth offset 0x400
 __declspec(property(get=__get_m_CachedListAndFoldoutDepth, put=__set_m_CachedListAndFoldoutDepth)) int32_t  m_CachedListAndFoldoutDepth;

 __declspec(property(get=get_visualInput, put=set_visualInput)) ::UnityEngine::UIElements::VisualElement*  visualInput;

 __declspec(property(get=get_rawValue, put=set_rawValue)) float_t  rawValue;

 __declspec(property(get=get_value, put=set_value)) float_t  value;

 __declspec(property(get=get_labelElement, put=set_labelElement)) ::UnityEngine::UIElements::Label*  labelElement;

 __declspec(property(get=get_label, put=set_label)) ::StringW  label;

 __declspec(property(get=get_showMixedValue)) bool  showMixedValue;

 __declspec(property(get=get_mixedValueLabel)) ::UnityEngine::UIElements::Label*  mixedValueLabel;

/// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<float_t>"
constexpr operator  ::UnityEngine::UIElements::INotifyValueChanged_1<float_t>*() noexcept;

static inline void setStaticF_ussClassName(::StringW  value) ;

static inline ::StringW getStaticF_ussClassName() ;

static inline void setStaticF_labelUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_labelUssClassName() ;

static inline void setStaticF_inputUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_inputUssClassName() ;

static inline void setStaticF_noLabelVariantUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_noLabelVariantUssClassName() ;

static inline void setStaticF_labelDraggerVariantUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_labelDraggerVariantUssClassName() ;

static inline void setStaticF_mixedValueLabelUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_mixedValueLabelUssClassName() ;

static inline void setStaticF_alignedFieldUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_alignedFieldUssClassName() ;

static inline void setStaticF_inspectorFieldUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_inspectorFieldUssClassName() ;

static inline void setStaticF_mixedValueString(::StringW  value) ;

static inline ::StringW getStaticF_mixedValueString() ;

static inline void setStaticF_serializedPropertyCopyName(::UnityEngine::PropertyName  value) ;

static inline ::UnityEngine::PropertyName getStaticF_serializedPropertyCopyName() ;

static inline void setStaticF_s_LabelWidthRatioProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelWidthRatioProperty() ;

static inline void setStaticF_s_LabelExtraPaddingProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelExtraPaddingProperty() ;

static inline void setStaticF_s_LabelBaseMinWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelBaseMinWidthProperty() ;

constexpr void __set_m_LabelWidthRatio(float_t  value) ;

constexpr float_t& __get_m_LabelWidthRatio() ;

constexpr float_t const& __get_m_LabelWidthRatio() const;

constexpr void __set_m_LabelExtraPadding(float_t  value) ;

constexpr float_t& __get_m_LabelExtraPadding() ;

constexpr float_t const& __get_m_LabelExtraPadding() const;

constexpr void __set_m_LabelBaseMinWidth(float_t  value) ;

constexpr float_t& __get_m_LabelBaseMinWidth() ;

constexpr float_t const& __get_m_LabelBaseMinWidth() const;

constexpr void __set_m_VisualInput(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_VisualInput() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_VisualInput() const;

constexpr void __set_m_Value(float_t  value) ;

constexpr float_t& __get_m_Value() ;

constexpr float_t const& __get_m_Value() const;

constexpr void __set__labelElement_k__BackingField(::UnityEngine::UIElements::Label*  value) ;

constexpr ::UnityEngine::UIElements::Label* __get__labelElement_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> __get__labelElement_k__BackingField() const;

constexpr void __set_m_ShowMixedValue(bool  value) ;

constexpr bool& __get_m_ShowMixedValue() ;

constexpr bool const& __get_m_ShowMixedValue() const;

constexpr void __set_m_MixedValueLabel(::UnityEngine::UIElements::Label*  value) ;

constexpr ::UnityEngine::UIElements::Label* __get_m_MixedValueLabel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> __get_m_MixedValueLabel() const;

constexpr void __set_m_CachedInspectorElement(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_CachedInspectorElement() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_CachedInspectorElement() const;

constexpr void __set_m_CachedListAndFoldoutDepth(int32_t  value) ;

constexpr int32_t& __get_m_CachedListAndFoldoutDepth() ;

constexpr int32_t const& __get_m_CachedListAndFoldoutDepth() const;

/// @brief Method get_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::VisualElement* get_visualInput() ;

/// @brief Method set_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_visualInput(::UnityEngine::UIElements::VisualElement*  value) ;

/// @brief Method get_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_rawValue() ;

/// @brief Method set_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_rawValue(float_t  value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_value() ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
inline void set_value(float_t  value) ;

/// @brief Method get_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Label* get_labelElement() ;

/// @brief Method set_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_labelElement(::UnityEngine::UIElements::Label*  value) ;

/// @brief Method get_label addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_label() ;

/// @brief Method set_label addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_label(::StringW  value) ;

/// @brief Method get_showMixedValue addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_showMixedValue() ;

/// @brief Method get_mixedValueLabel addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Label* get_mixedValueLabel() ;

static inline ::UnityEngine::UIElements::BaseField_1<float_t>* New_ctor(::StringW  label) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  label) ;

static inline ::UnityEngine::UIElements::BaseField_1<float_t>* New_ctor(::StringW  label, ::UnityEngine::UIElements::VisualElement*  visualInput) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  label, ::UnityEngine::UIElements::VisualElement*  visualInput) ;

/// @brief Method OnAttachToPanel addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent*  e) ;

/// @brief Method OnCustomStyleResolved addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent*  evt) ;

/// @brief Method OnInspectorFieldGeometryChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent*  e) ;

/// @brief Method AlignLabel addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AlignLabel() ;

/// @brief Method UpdateMixedValueContent addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateMixedValueContent() ;

/// @brief Method SetValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SetValueWithoutNotify(float_t  newValue) ;

/// @brief Method OnViewDataReady addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnViewDataReady() ;

/// @brief Method GetTooltipRect addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Rect GetTooltipRect() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseField_1(BaseField_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseField_1(BaseField_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseField_1()  = default;
public:


// Fields

// Static field ussClassName

// Static field labelUssClassName

// Static field inputUssClassName

// Static field noLabelVariantUssClassName

// Static field labelDraggerVariantUssClassName

// Static field mixedValueLabelUssClassName

// Static field alignedFieldUssClassName

// Static field inspectorFieldUssClassName

// Static field mixedValueString

// Static field serializedPropertyCopyName

// Static field s_LabelWidthRatioProperty

// Static field s_LabelExtraPaddingProperty

// Static field s_LabelBaseMinWidthProperty


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseField`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6801)), TypeDefinitionIndex(TypeDefinitionIndex(7130))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7130), inst: 105 })
// CS Name: ::UnityEngine.UIElements::BaseField`1<TValueType>*
class CORDL_TYPE BaseField_1<bool> : public ::UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<bool>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x408};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x408 - sizeof(::UnityEngine::UIElements::BindableElement)]{};

/// @brief Field m_LabelWidthRatio offset 0x3c0
 __declspec(property(get=__get_m_LabelWidthRatio, put=__set_m_LabelWidthRatio)) float_t  m_LabelWidthRatio;

/// @brief Field m_LabelExtraPadding offset 0x3c4
 __declspec(property(get=__get_m_LabelExtraPadding, put=__set_m_LabelExtraPadding)) float_t  m_LabelExtraPadding;

/// @brief Field m_LabelBaseMinWidth offset 0x3c8
 __declspec(property(get=__get_m_LabelBaseMinWidth, put=__set_m_LabelBaseMinWidth)) float_t  m_LabelBaseMinWidth;

/// @brief Field m_VisualInput offset 0x3d0
 __declspec(property(get=__get_m_VisualInput, put=__set_m_VisualInput)) ::UnityEngine::UIElements::VisualElement*  m_VisualInput;

/// @brief Field m_Value offset 0x3d8
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) bool  m_Value;

/// @brief Field <labelElement>k__BackingField offset 0x3e0
 __declspec(property(get=__get__labelElement_k__BackingField, put=__set__labelElement_k__BackingField)) ::UnityEngine::UIElements::Label*  _labelElement_k__BackingField;

/// @brief Field m_ShowMixedValue offset 0x3e8
 __declspec(property(get=__get_m_ShowMixedValue, put=__set_m_ShowMixedValue)) bool  m_ShowMixedValue;

/// @brief Field m_MixedValueLabel offset 0x3f0
 __declspec(property(get=__get_m_MixedValueLabel, put=__set_m_MixedValueLabel)) ::UnityEngine::UIElements::Label*  m_MixedValueLabel;

/// @brief Field m_CachedInspectorElement offset 0x3f8
 __declspec(property(get=__get_m_CachedInspectorElement, put=__set_m_CachedInspectorElement)) ::UnityEngine::UIElements::VisualElement*  m_CachedInspectorElement;

/// @brief Field m_CachedListAndFoldoutDepth offset 0x400
 __declspec(property(get=__get_m_CachedListAndFoldoutDepth, put=__set_m_CachedListAndFoldoutDepth)) int32_t  m_CachedListAndFoldoutDepth;

 __declspec(property(get=get_visualInput, put=set_visualInput)) ::UnityEngine::UIElements::VisualElement*  visualInput;

 __declspec(property(get=get_rawValue, put=set_rawValue)) bool  rawValue;

 __declspec(property(get=get_value, put=set_value)) bool  value;

 __declspec(property(get=get_labelElement, put=set_labelElement)) ::UnityEngine::UIElements::Label*  labelElement;

 __declspec(property(get=get_label, put=set_label)) ::StringW  label;

 __declspec(property(get=get_showMixedValue)) bool  showMixedValue;

 __declspec(property(get=get_mixedValueLabel)) ::UnityEngine::UIElements::Label*  mixedValueLabel;

/// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<bool>"
constexpr operator  ::UnityEngine::UIElements::INotifyValueChanged_1<bool>*() noexcept;

static inline void setStaticF_ussClassName(::StringW  value) ;

static inline ::StringW getStaticF_ussClassName() ;

static inline void setStaticF_labelUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_labelUssClassName() ;

static inline void setStaticF_inputUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_inputUssClassName() ;

static inline void setStaticF_noLabelVariantUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_noLabelVariantUssClassName() ;

static inline void setStaticF_labelDraggerVariantUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_labelDraggerVariantUssClassName() ;

static inline void setStaticF_mixedValueLabelUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_mixedValueLabelUssClassName() ;

static inline void setStaticF_alignedFieldUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_alignedFieldUssClassName() ;

static inline void setStaticF_inspectorFieldUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_inspectorFieldUssClassName() ;

static inline void setStaticF_mixedValueString(::StringW  value) ;

static inline ::StringW getStaticF_mixedValueString() ;

static inline void setStaticF_serializedPropertyCopyName(::UnityEngine::PropertyName  value) ;

static inline ::UnityEngine::PropertyName getStaticF_serializedPropertyCopyName() ;

static inline void setStaticF_s_LabelWidthRatioProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelWidthRatioProperty() ;

static inline void setStaticF_s_LabelExtraPaddingProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelExtraPaddingProperty() ;

static inline void setStaticF_s_LabelBaseMinWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelBaseMinWidthProperty() ;

constexpr void __set_m_LabelWidthRatio(float_t  value) ;

constexpr float_t& __get_m_LabelWidthRatio() ;

constexpr float_t const& __get_m_LabelWidthRatio() const;

constexpr void __set_m_LabelExtraPadding(float_t  value) ;

constexpr float_t& __get_m_LabelExtraPadding() ;

constexpr float_t const& __get_m_LabelExtraPadding() const;

constexpr void __set_m_LabelBaseMinWidth(float_t  value) ;

constexpr float_t& __get_m_LabelBaseMinWidth() ;

constexpr float_t const& __get_m_LabelBaseMinWidth() const;

constexpr void __set_m_VisualInput(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_VisualInput() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_VisualInput() const;

constexpr void __set_m_Value(bool  value) ;

constexpr bool& __get_m_Value() ;

constexpr bool const& __get_m_Value() const;

constexpr void __set__labelElement_k__BackingField(::UnityEngine::UIElements::Label*  value) ;

constexpr ::UnityEngine::UIElements::Label* __get__labelElement_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> __get__labelElement_k__BackingField() const;

constexpr void __set_m_ShowMixedValue(bool  value) ;

constexpr bool& __get_m_ShowMixedValue() ;

constexpr bool const& __get_m_ShowMixedValue() const;

constexpr void __set_m_MixedValueLabel(::UnityEngine::UIElements::Label*  value) ;

constexpr ::UnityEngine::UIElements::Label* __get_m_MixedValueLabel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> __get_m_MixedValueLabel() const;

constexpr void __set_m_CachedInspectorElement(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_CachedInspectorElement() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_CachedInspectorElement() const;

constexpr void __set_m_CachedListAndFoldoutDepth(int32_t  value) ;

constexpr int32_t& __get_m_CachedListAndFoldoutDepth() ;

constexpr int32_t const& __get_m_CachedListAndFoldoutDepth() const;

/// @brief Method get_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::VisualElement* get_visualInput() ;

/// @brief Method set_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_visualInput(::UnityEngine::UIElements::VisualElement*  value) ;

/// @brief Method get_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_rawValue() ;

/// @brief Method set_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_rawValue(bool  value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_value() ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
inline void set_value(bool  value) ;

/// @brief Method get_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Label* get_labelElement() ;

/// @brief Method set_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_labelElement(::UnityEngine::UIElements::Label*  value) ;

/// @brief Method get_label addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_label() ;

/// @brief Method set_label addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_label(::StringW  value) ;

/// @brief Method get_showMixedValue addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_showMixedValue() ;

/// @brief Method get_mixedValueLabel addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Label* get_mixedValueLabel() ;

static inline ::UnityEngine::UIElements::BaseField_1<bool>* New_ctor(::StringW  label) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  label) ;

static inline ::UnityEngine::UIElements::BaseField_1<bool>* New_ctor(::StringW  label, ::UnityEngine::UIElements::VisualElement*  visualInput) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  label, ::UnityEngine::UIElements::VisualElement*  visualInput) ;

/// @brief Method OnAttachToPanel addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent*  e) ;

/// @brief Method OnCustomStyleResolved addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent*  evt) ;

/// @brief Method OnInspectorFieldGeometryChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent*  e) ;

/// @brief Method AlignLabel addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AlignLabel() ;

/// @brief Method UpdateMixedValueContent addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateMixedValueContent() ;

/// @brief Method SetValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SetValueWithoutNotify(bool  newValue) ;

/// @brief Method OnViewDataReady addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnViewDataReady() ;

/// @brief Method GetTooltipRect addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Rect GetTooltipRect() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseField_1(BaseField_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseField_1(BaseField_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseField_1()  = default;
public:


// Fields

// Static field ussClassName

// Static field labelUssClassName

// Static field inputUssClassName

// Static field noLabelVariantUssClassName

// Static field labelDraggerVariantUssClassName

// Static field mixedValueLabelUssClassName

// Static field alignedFieldUssClassName

// Static field inspectorFieldUssClassName

// Static field mixedValueString

// Static field serializedPropertyCopyName

// Static field s_LabelWidthRatioProperty

// Static field s_LabelExtraPaddingProperty

// Static field s_LabelBaseMinWidthProperty


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseField`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7130)), TypeDefinitionIndex(TypeDefinitionIndex(6801))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7130), inst: 98 })
// CS Name: ::UnityEngine.UIElements::BaseField`1<TValueType>*
class CORDL_TYPE BaseField_1<int32_t> : public ::UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x408};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x408 - sizeof(::UnityEngine::UIElements::BindableElement)]{};

/// @brief Field m_LabelWidthRatio offset 0x3c0
 __declspec(property(get=__get_m_LabelWidthRatio, put=__set_m_LabelWidthRatio)) float_t  m_LabelWidthRatio;

/// @brief Field m_LabelExtraPadding offset 0x3c4
 __declspec(property(get=__get_m_LabelExtraPadding, put=__set_m_LabelExtraPadding)) float_t  m_LabelExtraPadding;

/// @brief Field m_LabelBaseMinWidth offset 0x3c8
 __declspec(property(get=__get_m_LabelBaseMinWidth, put=__set_m_LabelBaseMinWidth)) float_t  m_LabelBaseMinWidth;

/// @brief Field m_VisualInput offset 0x3d0
 __declspec(property(get=__get_m_VisualInput, put=__set_m_VisualInput)) ::UnityEngine::UIElements::VisualElement*  m_VisualInput;

/// @brief Field m_Value offset 0x3d8
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) int32_t  m_Value;

/// @brief Field <labelElement>k__BackingField offset 0x3e0
 __declspec(property(get=__get__labelElement_k__BackingField, put=__set__labelElement_k__BackingField)) ::UnityEngine::UIElements::Label*  _labelElement_k__BackingField;

/// @brief Field m_ShowMixedValue offset 0x3e8
 __declspec(property(get=__get_m_ShowMixedValue, put=__set_m_ShowMixedValue)) bool  m_ShowMixedValue;

/// @brief Field m_MixedValueLabel offset 0x3f0
 __declspec(property(get=__get_m_MixedValueLabel, put=__set_m_MixedValueLabel)) ::UnityEngine::UIElements::Label*  m_MixedValueLabel;

/// @brief Field m_CachedInspectorElement offset 0x3f8
 __declspec(property(get=__get_m_CachedInspectorElement, put=__set_m_CachedInspectorElement)) ::UnityEngine::UIElements::VisualElement*  m_CachedInspectorElement;

/// @brief Field m_CachedListAndFoldoutDepth offset 0x400
 __declspec(property(get=__get_m_CachedListAndFoldoutDepth, put=__set_m_CachedListAndFoldoutDepth)) int32_t  m_CachedListAndFoldoutDepth;

 __declspec(property(get=get_visualInput, put=set_visualInput)) ::UnityEngine::UIElements::VisualElement*  visualInput;

 __declspec(property(get=get_rawValue, put=set_rawValue)) int32_t  rawValue;

 __declspec(property(get=get_value, put=set_value)) int32_t  value;

 __declspec(property(get=get_labelElement, put=set_labelElement)) ::UnityEngine::UIElements::Label*  labelElement;

 __declspec(property(get=get_label, put=set_label)) ::StringW  label;

 __declspec(property(get=get_showMixedValue)) bool  showMixedValue;

 __declspec(property(get=get_mixedValueLabel)) ::UnityEngine::UIElements::Label*  mixedValueLabel;

/// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<int32_t>"
constexpr operator  ::UnityEngine::UIElements::INotifyValueChanged_1<int32_t>*() noexcept;

static inline void setStaticF_ussClassName(::StringW  value) ;

static inline ::StringW getStaticF_ussClassName() ;

static inline void setStaticF_labelUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_labelUssClassName() ;

static inline void setStaticF_inputUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_inputUssClassName() ;

static inline void setStaticF_noLabelVariantUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_noLabelVariantUssClassName() ;

static inline void setStaticF_labelDraggerVariantUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_labelDraggerVariantUssClassName() ;

static inline void setStaticF_mixedValueLabelUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_mixedValueLabelUssClassName() ;

static inline void setStaticF_alignedFieldUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_alignedFieldUssClassName() ;

static inline void setStaticF_inspectorFieldUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_inspectorFieldUssClassName() ;

static inline void setStaticF_mixedValueString(::StringW  value) ;

static inline ::StringW getStaticF_mixedValueString() ;

static inline void setStaticF_serializedPropertyCopyName(::UnityEngine::PropertyName  value) ;

static inline ::UnityEngine::PropertyName getStaticF_serializedPropertyCopyName() ;

static inline void setStaticF_s_LabelWidthRatioProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelWidthRatioProperty() ;

static inline void setStaticF_s_LabelExtraPaddingProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelExtraPaddingProperty() ;

static inline void setStaticF_s_LabelBaseMinWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelBaseMinWidthProperty() ;

constexpr void __set_m_LabelWidthRatio(float_t  value) ;

constexpr float_t& __get_m_LabelWidthRatio() ;

constexpr float_t const& __get_m_LabelWidthRatio() const;

constexpr void __set_m_LabelExtraPadding(float_t  value) ;

constexpr float_t& __get_m_LabelExtraPadding() ;

constexpr float_t const& __get_m_LabelExtraPadding() const;

constexpr void __set_m_LabelBaseMinWidth(float_t  value) ;

constexpr float_t& __get_m_LabelBaseMinWidth() ;

constexpr float_t const& __get_m_LabelBaseMinWidth() const;

constexpr void __set_m_VisualInput(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_VisualInput() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_VisualInput() const;

constexpr void __set_m_Value(int32_t  value) ;

constexpr int32_t& __get_m_Value() ;

constexpr int32_t const& __get_m_Value() const;

constexpr void __set__labelElement_k__BackingField(::UnityEngine::UIElements::Label*  value) ;

constexpr ::UnityEngine::UIElements::Label* __get__labelElement_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> __get__labelElement_k__BackingField() const;

constexpr void __set_m_ShowMixedValue(bool  value) ;

constexpr bool& __get_m_ShowMixedValue() ;

constexpr bool const& __get_m_ShowMixedValue() const;

constexpr void __set_m_MixedValueLabel(::UnityEngine::UIElements::Label*  value) ;

constexpr ::UnityEngine::UIElements::Label* __get_m_MixedValueLabel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> __get_m_MixedValueLabel() const;

constexpr void __set_m_CachedInspectorElement(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_CachedInspectorElement() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_CachedInspectorElement() const;

constexpr void __set_m_CachedListAndFoldoutDepth(int32_t  value) ;

constexpr int32_t& __get_m_CachedListAndFoldoutDepth() ;

constexpr int32_t const& __get_m_CachedListAndFoldoutDepth() const;

/// @brief Method get_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::VisualElement* get_visualInput() ;

/// @brief Method set_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_visualInput(::UnityEngine::UIElements::VisualElement*  value) ;

/// @brief Method get_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_rawValue() ;

/// @brief Method set_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_rawValue(int32_t  value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_value() ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
inline void set_value(int32_t  value) ;

/// @brief Method get_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Label* get_labelElement() ;

/// @brief Method set_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_labelElement(::UnityEngine::UIElements::Label*  value) ;

/// @brief Method get_label addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_label() ;

/// @brief Method set_label addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_label(::StringW  value) ;

/// @brief Method get_showMixedValue addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_showMixedValue() ;

/// @brief Method get_mixedValueLabel addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Label* get_mixedValueLabel() ;

static inline ::UnityEngine::UIElements::BaseField_1<int32_t>* New_ctor(::StringW  label) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  label) ;

static inline ::UnityEngine::UIElements::BaseField_1<int32_t>* New_ctor(::StringW  label, ::UnityEngine::UIElements::VisualElement*  visualInput) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  label, ::UnityEngine::UIElements::VisualElement*  visualInput) ;

/// @brief Method OnAttachToPanel addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent*  e) ;

/// @brief Method OnCustomStyleResolved addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent*  evt) ;

/// @brief Method OnInspectorFieldGeometryChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent*  e) ;

/// @brief Method AlignLabel addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AlignLabel() ;

/// @brief Method UpdateMixedValueContent addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateMixedValueContent() ;

/// @brief Method SetValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SetValueWithoutNotify(int32_t  newValue) ;

/// @brief Method OnViewDataReady addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnViewDataReady() ;

/// @brief Method GetTooltipRect addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Rect GetTooltipRect() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseField_1(BaseField_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseField_1(BaseField_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseField_1()  = default;
public:


// Fields

// Static field ussClassName

// Static field labelUssClassName

// Static field inputUssClassName

// Static field noLabelVariantUssClassName

// Static field labelDraggerVariantUssClassName

// Static field mixedValueLabelUssClassName

// Static field alignedFieldUssClassName

// Static field inspectorFieldUssClassName

// Static field mixedValueString

// Static field serializedPropertyCopyName

// Static field s_LabelWidthRatioProperty

// Static field s_LabelExtraPaddingProperty

// Static field s_LabelBaseMinWidthProperty


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseField`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValueType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7130)), TypeDefinitionIndex(TypeDefinitionIndex(6801))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7130), inst: 2 })
// CS Name: ::UnityEngine.UIElements::BaseField`1<TValueType>*
class CORDL_TYPE BaseField_1<TValueType> : public ::UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x408};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x408 - sizeof(::UnityEngine::UIElements::BindableElement)]{};

/// @brief Field m_LabelWidthRatio offset 0x3c0
 __declspec(property(get=__get_m_LabelWidthRatio, put=__set_m_LabelWidthRatio)) float_t  m_LabelWidthRatio;

/// @brief Field m_LabelExtraPadding offset 0x3c4
 __declspec(property(get=__get_m_LabelExtraPadding, put=__set_m_LabelExtraPadding)) float_t  m_LabelExtraPadding;

/// @brief Field m_LabelBaseMinWidth offset 0x3c8
 __declspec(property(get=__get_m_LabelBaseMinWidth, put=__set_m_LabelBaseMinWidth)) float_t  m_LabelBaseMinWidth;

/// @brief Field m_VisualInput offset 0x3d0
 __declspec(property(get=__get_m_VisualInput, put=__set_m_VisualInput)) ::UnityEngine::UIElements::VisualElement*  m_VisualInput;

/// @brief Field m_Value offset 0x3d8
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) TValueType  m_Value;

/// @brief Field <labelElement>k__BackingField offset 0x3e0
 __declspec(property(get=__get__labelElement_k__BackingField, put=__set__labelElement_k__BackingField)) ::UnityEngine::UIElements::Label*  _labelElement_k__BackingField;

/// @brief Field m_ShowMixedValue offset 0x3e8
 __declspec(property(get=__get_m_ShowMixedValue, put=__set_m_ShowMixedValue)) bool  m_ShowMixedValue;

/// @brief Field m_MixedValueLabel offset 0x3f0
 __declspec(property(get=__get_m_MixedValueLabel, put=__set_m_MixedValueLabel)) ::UnityEngine::UIElements::Label*  m_MixedValueLabel;

/// @brief Field m_CachedInspectorElement offset 0x3f8
 __declspec(property(get=__get_m_CachedInspectorElement, put=__set_m_CachedInspectorElement)) ::UnityEngine::UIElements::VisualElement*  m_CachedInspectorElement;

/// @brief Field m_CachedListAndFoldoutDepth offset 0x400
 __declspec(property(get=__get_m_CachedListAndFoldoutDepth, put=__set_m_CachedListAndFoldoutDepth)) int32_t  m_CachedListAndFoldoutDepth;

 __declspec(property(get=get_visualInput, put=set_visualInput)) ::UnityEngine::UIElements::VisualElement*  visualInput;

 __declspec(property(get=get_rawValue, put=set_rawValue)) TValueType  rawValue;

 __declspec(property(get=get_value, put=set_value)) TValueType  value;

 __declspec(property(get=get_labelElement, put=set_labelElement)) ::UnityEngine::UIElements::Label*  labelElement;

 __declspec(property(get=get_label, put=set_label)) ::StringW  label;

 __declspec(property(get=get_showMixedValue)) bool  showMixedValue;

 __declspec(property(get=get_mixedValueLabel)) ::UnityEngine::UIElements::Label*  mixedValueLabel;

/// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>"
constexpr operator  ::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>*() noexcept;

static inline void setStaticF_ussClassName(::StringW  value) ;

static inline ::StringW getStaticF_ussClassName() ;

static inline void setStaticF_labelUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_labelUssClassName() ;

static inline void setStaticF_inputUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_inputUssClassName() ;

static inline void setStaticF_noLabelVariantUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_noLabelVariantUssClassName() ;

static inline void setStaticF_labelDraggerVariantUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_labelDraggerVariantUssClassName() ;

static inline void setStaticF_mixedValueLabelUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_mixedValueLabelUssClassName() ;

static inline void setStaticF_alignedFieldUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_alignedFieldUssClassName() ;

static inline void setStaticF_inspectorFieldUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_inspectorFieldUssClassName() ;

static inline void setStaticF_mixedValueString(::StringW  value) ;

static inline ::StringW getStaticF_mixedValueString() ;

static inline void setStaticF_serializedPropertyCopyName(::UnityEngine::PropertyName  value) ;

static inline ::UnityEngine::PropertyName getStaticF_serializedPropertyCopyName() ;

static inline void setStaticF_s_LabelWidthRatioProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelWidthRatioProperty() ;

static inline void setStaticF_s_LabelExtraPaddingProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelExtraPaddingProperty() ;

static inline void setStaticF_s_LabelBaseMinWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelBaseMinWidthProperty() ;

constexpr void __set_m_LabelWidthRatio(float_t  value) ;

constexpr float_t& __get_m_LabelWidthRatio() ;

constexpr float_t const& __get_m_LabelWidthRatio() const;

constexpr void __set_m_LabelExtraPadding(float_t  value) ;

constexpr float_t& __get_m_LabelExtraPadding() ;

constexpr float_t const& __get_m_LabelExtraPadding() const;

constexpr void __set_m_LabelBaseMinWidth(float_t  value) ;

constexpr float_t& __get_m_LabelBaseMinWidth() ;

constexpr float_t const& __get_m_LabelBaseMinWidth() const;

constexpr void __set_m_VisualInput(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_VisualInput() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_VisualInput() const;

constexpr void __set_m_Value(TValueType  value) ;

constexpr TValueType& __get_m_Value() ;

constexpr TValueType const& __get_m_Value() const;

constexpr void __set__labelElement_k__BackingField(::UnityEngine::UIElements::Label*  value) ;

constexpr ::UnityEngine::UIElements::Label* __get__labelElement_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> __get__labelElement_k__BackingField() const;

constexpr void __set_m_ShowMixedValue(bool  value) ;

constexpr bool& __get_m_ShowMixedValue() ;

constexpr bool const& __get_m_ShowMixedValue() const;

constexpr void __set_m_MixedValueLabel(::UnityEngine::UIElements::Label*  value) ;

constexpr ::UnityEngine::UIElements::Label* __get_m_MixedValueLabel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> __get_m_MixedValueLabel() const;

constexpr void __set_m_CachedInspectorElement(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_CachedInspectorElement() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_CachedInspectorElement() const;

constexpr void __set_m_CachedListAndFoldoutDepth(int32_t  value) ;

constexpr int32_t& __get_m_CachedListAndFoldoutDepth() ;

constexpr int32_t const& __get_m_CachedListAndFoldoutDepth() const;

/// @brief Method get_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::VisualElement* get_visualInput() ;

/// @brief Method set_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_visualInput(::UnityEngine::UIElements::VisualElement*  value) ;

/// @brief Method get_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValueType get_rawValue() ;

/// @brief Method set_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_rawValue(TValueType  value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
inline TValueType get_value() ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
inline void set_value(TValueType  value) ;

/// @brief Method get_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Label* get_labelElement() ;

/// @brief Method set_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_labelElement(::UnityEngine::UIElements::Label*  value) ;

/// @brief Method get_label addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_label() ;

/// @brief Method set_label addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_label(::StringW  value) ;

/// @brief Method get_showMixedValue addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_showMixedValue() ;

/// @brief Method get_mixedValueLabel addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Label* get_mixedValueLabel() ;

static inline ::UnityEngine::UIElements::BaseField_1<TValueType>* New_ctor(::StringW  label) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  label) ;

static inline ::UnityEngine::UIElements::BaseField_1<TValueType>* New_ctor(::StringW  label, ::UnityEngine::UIElements::VisualElement*  visualInput) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  label, ::UnityEngine::UIElements::VisualElement*  visualInput) ;

/// @brief Method OnAttachToPanel addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent*  e) ;

/// @brief Method OnCustomStyleResolved addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent*  evt) ;

/// @brief Method OnInspectorFieldGeometryChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent*  e) ;

/// @brief Method AlignLabel addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AlignLabel() ;

/// @brief Method UpdateMixedValueContent addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateMixedValueContent() ;

/// @brief Method SetValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SetValueWithoutNotify(TValueType  newValue) ;

/// @brief Method OnViewDataReady addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnViewDataReady() ;

/// @brief Method GetTooltipRect addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Rect GetTooltipRect() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseField_1(BaseField_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseField_1(BaseField_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseField_1()  = default;
public:


// Fields

// Static field ussClassName

// Static field labelUssClassName

// Static field inputUssClassName

// Static field noLabelVariantUssClassName

// Static field labelDraggerVariantUssClassName

// Static field mixedValueLabelUssClassName

// Static field alignedFieldUssClassName

// Static field inspectorFieldUssClassName

// Static field mixedValueString

// Static field serializedPropertyCopyName

// Static field s_LabelWidthRatioProperty

// Static field s_LabelExtraPaddingProperty

// Static field s_LabelBaseMinWidthProperty


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BaseField_1, "UnityEngine.UIElements", "BaseField`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__BaseField_1__UxmlTraits, "UnityEngine.UIElements", "BaseField`1/UxmlTraits");
