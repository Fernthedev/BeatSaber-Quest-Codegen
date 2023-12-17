#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleVariable)
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleVariable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleVariable);
// Type: UnityEngine.UIElements::StyleVariable
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7265))
// CS Name: ::UnityEngine.UIElements::StyleVariable
struct CORDL_TYPE StyleVariable : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field name offset 0x0
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field sheet offset 0x8
 __declspec(property(get=__get_sheet, put=__set_sheet)) ::UnityEngine::UIElements::StyleSheet*  sheet;

/// @brief Field handles offset 0x10
 __declspec(property(get=__get_handles, put=__set_handles)) ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>  handles;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_sheet(::UnityEngine::UIElements::StyleSheet*  value) ;

constexpr ::UnityEngine::UIElements::StyleSheet* __get_sheet() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> __get_sheet() const;

constexpr void __set_handles(::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>& __get_handles() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*> const& __get_handles() const;

/// @brief Method .ctor addr 0x2e69af8 size 0xc virtual false final false
inline void _ctor(::StringW  name, ::UnityEngine::UIElements::StyleSheet*  sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>  handles) ;

/// @brief Method GetHashCode addr 0x2e69b04 size 0x78 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet*", modifiers: "", def_value: None }, CppParam { name: "handles", ty: "::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>", modifiers: "", def_value: None }]
constexpr StyleVariable(::StringW  name, ::UnityEngine::UIElements::StyleSheet*  sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>  handles) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleVariable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleVariable()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleVariable, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleVariable, "UnityEngine.UIElements", "StyleVariable");
