#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SafeStringMarshal)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Mono {
struct SafeStringMarshal;
}
// Write type traits
MARK_VAL_T(::Mono::SafeStringMarshal);
// Type: Mono::SafeStringMarshal
namespace Mono {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2249))
// CS Name: ::Mono::SafeStringMarshal
struct CORDL_TYPE SafeStringMarshal : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field str offset 0x0
 __declspec(property(get=__get_str, put=__set_str)) ::StringW  str;

/// @brief Field marshaled_string offset 0x8
 __declspec(property(get=__get_marshaled_string, put=__set_marshaled_string)) ::cordl_internals::intptr_t  marshaled_string;

 __declspec(property(get=get_Value)) ::cordl_internals::intptr_t  Value;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_str(::StringW  value) ;

constexpr ::StringW& __get_str() ;

constexpr ::StringW const& __get_str() const;

constexpr void __set_marshaled_string(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_marshaled_string() ;

constexpr ::cordl_internals::intptr_t const& __get_marshaled_string() const;

/// @brief Method StringToUtf8_icall addr 0x2412e94 size 0x4 virtual false final false
static inline ::cordl_internals::intptr_t StringToUtf8_icall(ByRef<::StringW>  str) ;

/// @brief Method StringToUtf8 addr 0x2412e98 size 0x18 virtual false final false
static inline ::cordl_internals::intptr_t StringToUtf8(::StringW  str) ;

/// @brief Method GFree addr 0x2412eb0 size 0x4 virtual false final false
static inline void GFree(::cordl_internals::intptr_t  ptr) ;

/// @brief Method .ctor addr 0x2412c6c size 0x60 virtual false final false
inline void _ctor(::StringW  str) ;

/// @brief Method get_Value addr 0x2412eb4 size 0x80 virtual false final false
inline ::cordl_internals::intptr_t get_Value() ;

/// @brief Method Dispose addr 0x2412f34 size 0x74 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "marshaled_string", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr SafeStringMarshal(::StringW  str, ::cordl_internals::intptr_t  marshaled_string) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SafeStringMarshal(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SafeStringMarshal()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::SafeStringMarshal, 0x10>, "Size mismatch!");

} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::SafeStringMarshal, "Mono", "SafeStringMarshal");
