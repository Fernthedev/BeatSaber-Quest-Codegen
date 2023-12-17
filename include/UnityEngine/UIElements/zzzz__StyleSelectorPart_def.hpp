#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StyleSelectorPart)
namespace UnityEngine::UIElements {
struct StyleSelectorType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleSelectorPart;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSelectorPart);
// Type: UnityEngine.UIElements::StyleSelectorPart
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7264))
// CS Name: ::UnityEngine.UIElements::StyleSelectorPart
struct CORDL_TYPE StyleSelectorPart : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Value offset 0x0
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) ::StringW  m_Value;

/// @brief Field m_Type offset 0x8
 __declspec(property(get=__get_m_Type, put=__set_m_Type)) ::UnityEngine::UIElements::StyleSelectorType  m_Type;

/// @brief Field tempData offset 0x10
 __declspec(property(get=__get_tempData, put=__set_tempData)) ::System::Object*  tempData;

 __declspec(property(get=get_value)) ::StringW  value;

 __declspec(property(get=get_type, put=set_type)) ::UnityEngine::UIElements::StyleSelectorType  type;

constexpr void __set_m_Value(::StringW  value) ;

constexpr ::StringW& __get_m_Value() ;

constexpr ::StringW const& __get_m_Value() const;

constexpr void __set_m_Type(::UnityEngine::UIElements::StyleSelectorType  value) ;

constexpr ::UnityEngine::UIElements::StyleSelectorType& __get_m_Type() ;

constexpr ::UnityEngine::UIElements::StyleSelectorType const& __get_m_Type() const;

constexpr void __set_tempData(::System::Object*  value) ;

constexpr ::System::Object* __get_tempData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_tempData() const;

/// @brief Method get_value addr 0x2e69988 size 0x8 virtual false final false
inline ::StringW get_value() ;

/// @brief Method get_type addr 0x2e69990 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::StyleSelectorType get_type() ;

/// @brief Method set_type addr 0x2e69998 size 0x8 virtual false final false
inline void set_type(::UnityEngine::UIElements::StyleSelectorType  value) ;

/// @brief Method ToString addr 0x2e699a0 size 0x110 virtual true final false
inline ::StringW ToString() ;

/// @brief Method CreateClass addr 0x2e69ab0 size 0x18 virtual false final false
static inline ::UnityEngine::UIElements::StyleSelectorPart CreateClass(::StringW  className) ;

/// @brief Method CreateId addr 0x2e69ac8 size 0x18 virtual false final false
static inline ::UnityEngine::UIElements::StyleSelectorPart CreateId(::StringW  Id) ;

/// @brief Method CreatePredicate addr 0x2e69ae0 size 0x18 virtual false final false
static inline ::UnityEngine::UIElements::StyleSelectorPart CreatePredicate(::System::Object*  predicate) ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::UnityEngine::UIElements::StyleSelectorType", modifiers: "", def_value: None }, CppParam { name: "tempData", ty: "::System::Object*", modifiers: "", def_value: None }]
constexpr StyleSelectorPart(::StringW  m_Value, ::UnityEngine::UIElements::StyleSelectorType  m_Type, ::System::Object*  tempData) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleSelectorPart(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleSelectorPart()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSelectorPart, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSelectorPart, "UnityEngine.UIElements", "StyleSelectorPart");
