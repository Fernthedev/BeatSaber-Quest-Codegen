#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TemplateAsset)
namespace UnityEngine::UIElements {
struct __TemplateAsset__AttributeOverride;
}
namespace UnityEngine::UIElements {
struct __VisualTreeAsset__SlotUsageEntry;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TemplateAsset;
}
namespace UnityEngine::UIElements {
struct __TemplateAsset__AttributeOverride;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TemplateAsset);
MARK_VAL_T(::UnityEngine::UIElements::__TemplateAsset__AttributeOverride);
// Type: ::AttributeOverride
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7000))
// CS Name: ::TemplateAsset::AttributeOverride
struct CORDL_TYPE __TemplateAsset__AttributeOverride : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ElementName offset 0x0
 __declspec(property(get=__get_m_ElementName, put=__set_m_ElementName)) ::StringW  m_ElementName;

/// @brief Field m_AttributeName offset 0x8
 __declspec(property(get=__get_m_AttributeName, put=__set_m_AttributeName)) ::StringW  m_AttributeName;

/// @brief Field m_Value offset 0x10
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) ::StringW  m_Value;

constexpr void __set_m_ElementName(::StringW  value) ;

constexpr ::StringW& __get_m_ElementName() ;

constexpr ::StringW const& __get_m_ElementName() const;

constexpr void __set_m_AttributeName(::StringW  value) ;

constexpr ::StringW& __get_m_AttributeName() ;

constexpr ::StringW const& __get_m_AttributeName() const;

constexpr void __set_m_Value(::StringW  value) ;

constexpr ::StringW& __get_m_Value() ;

constexpr ::StringW const& __get_m_Value() const;

// Ctor Parameters [CppParam { name: "m_ElementName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_AttributeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "::StringW", modifiers: "", def_value: None }]
constexpr __TemplateAsset__AttributeOverride(::StringW  m_ElementName, ::StringW  m_AttributeName, ::StringW  m_Value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TemplateAsset__AttributeOverride(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TemplateAsset__AttributeOverride()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TemplateAsset
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7013))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7001))
// CS Name: ::UnityEngine.UIElements::TemplateAsset*
class CORDL_TYPE TemplateAsset : public ::UnityEngine::UIElements::VisualElementAsset {
public:
// Declarations
using AttributeOverride = ::UnityEngine::UIElements::__TemplateAsset__AttributeOverride;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::UnityEngine::UIElements::VisualElementAsset)]{};

/// @brief Field m_TemplateAlias offset 0x60
 __declspec(property(get=__get_m_TemplateAlias, put=__set_m_TemplateAlias)) ::StringW  m_TemplateAlias;

/// @brief Field m_AttributeOverrides offset 0x68
 __declspec(property(get=__get_m_AttributeOverrides, put=__set_m_AttributeOverrides)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*  m_AttributeOverrides;

/// @brief Field m_SlotUsages offset 0x70
 __declspec(property(get=__get_m_SlotUsages, put=__set_m_SlotUsages)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*  m_SlotUsages;

 __declspec(property(get=get_attributeOverrides)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*  attributeOverrides;

 __declspec(property(get=get_slotUsages)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*  slotUsages;

constexpr void __set_m_TemplateAlias(::StringW  value) ;

constexpr ::StringW& __get_m_TemplateAlias() ;

constexpr ::StringW const& __get_m_TemplateAlias() const;

constexpr void __set_m_AttributeOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* __get_m_AttributeOverrides() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*> __get_m_AttributeOverrides() const;

constexpr void __set_m_SlotUsages(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>* __get_m_SlotUsages() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*> __get_m_SlotUsages() const;

/// @brief Method get_attributeOverrides addr 0x2e0ff1c size 0x80 virtual false final false
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* get_attributeOverrides() ;

/// @brief Method get_slotUsages addr 0x2e0ff9c size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>* get_slotUsages() ;

// Ctor Parameters [CppParam { name: "", ty: "TemplateAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TemplateAsset(TemplateAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemplateAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemplateAsset(TemplateAsset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TemplateAsset()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TemplateAsset, 0x78>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TemplateAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TemplateAsset*, "UnityEngine.UIElements", "TemplateAsset");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TemplateAsset__AttributeOverride, "UnityEngine.UIElements", "TemplateAsset/AttributeOverride");
