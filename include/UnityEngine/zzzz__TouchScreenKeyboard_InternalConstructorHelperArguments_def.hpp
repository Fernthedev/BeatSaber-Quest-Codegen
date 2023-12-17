#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchScreenKeyboard_InternalConstructorHelperArguments)
// Forward declare root types
namespace UnityEngine {
struct TouchScreenKeyboard_InternalConstructorHelperArguments;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments);
// Type: UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10182))
// CS Name: ::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments
struct CORDL_TYPE TouchScreenKeyboard_InternalConstructorHelperArguments : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field keyboardType offset 0x0
 __declspec(property(get=__get_keyboardType, put=__set_keyboardType)) uint32_t  keyboardType;

/// @brief Field autocorrection offset 0x4
 __declspec(property(get=__get_autocorrection, put=__set_autocorrection)) uint32_t  autocorrection;

/// @brief Field multiline offset 0x8
 __declspec(property(get=__get_multiline, put=__set_multiline)) uint32_t  multiline;

/// @brief Field secure offset 0xc
 __declspec(property(get=__get_secure, put=__set_secure)) uint32_t  secure;

/// @brief Field alert offset 0x10
 __declspec(property(get=__get_alert, put=__set_alert)) uint32_t  alert;

/// @brief Field characterLimit offset 0x14
 __declspec(property(get=__get_characterLimit, put=__set_characterLimit)) int32_t  characterLimit;

constexpr void __set_keyboardType(uint32_t  value) ;

constexpr uint32_t& __get_keyboardType() ;

constexpr uint32_t const& __get_keyboardType() const;

constexpr void __set_autocorrection(uint32_t  value) ;

constexpr uint32_t& __get_autocorrection() ;

constexpr uint32_t const& __get_autocorrection() const;

constexpr void __set_multiline(uint32_t  value) ;

constexpr uint32_t& __get_multiline() ;

constexpr uint32_t const& __get_multiline() const;

constexpr void __set_secure(uint32_t  value) ;

constexpr uint32_t& __get_secure() ;

constexpr uint32_t const& __get_secure() const;

constexpr void __set_alert(uint32_t  value) ;

constexpr uint32_t& __get_alert() ;

constexpr uint32_t const& __get_alert() const;

constexpr void __set_characterLimit(int32_t  value) ;

constexpr int32_t& __get_characterLimit() ;

constexpr int32_t const& __get_characterLimit() const;

// Ctor Parameters [CppParam { name: "keyboardType", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "autocorrection", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "multiline", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "secure", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "alert", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "characterLimit", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchScreenKeyboard_InternalConstructorHelperArguments(uint32_t  keyboardType, uint32_t  autocorrection, uint32_t  multiline, uint32_t  secure, uint32_t  alert, int32_t  characterLimit) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TouchScreenKeyboard_InternalConstructorHelperArguments(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TouchScreenKeyboard_InternalConstructorHelperArguments()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments, "UnityEngine", "TouchScreenKeyboard_InternalConstructorHelperArguments");
