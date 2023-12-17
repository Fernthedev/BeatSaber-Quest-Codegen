#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleKeyInfo)
namespace System {
class Object;
}
namespace System {
struct ConsoleKey;
}
namespace System {
struct ConsoleModifiers;
}
// Forward declare root types
namespace System {
struct ConsoleKeyInfo;
}
// Write type traits
MARK_VAL_T(::System::ConsoleKeyInfo);
// Type: System::ConsoleKeyInfo
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2520))
// CS Name: ::System::ConsoleKeyInfo
struct CORDL_TYPE ConsoleKeyInfo : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field _keyChar offset 0x0
 __declspec(property(get=__get__keyChar, put=__set__keyChar)) char16_t  _keyChar;

/// @brief Field _key offset 0x4
 __declspec(property(get=__get__key, put=__set__key)) ::System::ConsoleKey  _key;

/// @brief Field _mods offset 0x8
 __declspec(property(get=__get__mods, put=__set__mods)) ::System::ConsoleModifiers  _mods;

 __declspec(property(get=get_KeyChar)) char16_t  KeyChar;

 __declspec(property(get=get_Key)) ::System::ConsoleKey  Key;

constexpr void __set__keyChar(char16_t  value) ;

constexpr char16_t& __get__keyChar() ;

constexpr char16_t const& __get__keyChar() const;

constexpr void __set__key(::System::ConsoleKey  value) ;

constexpr ::System::ConsoleKey& __get__key() ;

constexpr ::System::ConsoleKey const& __get__key() const;

constexpr void __set__mods(::System::ConsoleModifiers  value) ;

constexpr ::System::ConsoleModifiers& __get__mods() ;

constexpr ::System::ConsoleModifiers const& __get__mods() const;

/// @brief Method .ctor addr 0x25cfd20 size 0xa8 virtual false final false
inline void _ctor(char16_t  keyChar, ::System::ConsoleKey  key, bool  shift, bool  alt, bool  control) ;

/// @brief Method get_KeyChar addr 0x25cfdc8 size 0x8 virtual false final false
inline char16_t get_KeyChar() ;

/// @brief Method get_Key addr 0x25cfdd0 size 0x8 virtual false final false
inline ::System::ConsoleKey get_Key() ;

/// @brief Method Equals addr 0x25cfdd8 size 0x98 virtual true final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method Equals addr 0x25cfe70 size 0x34 virtual false final false
inline bool Equals(::System::ConsoleKeyInfo  obj) ;

/// @brief Method GetHashCode addr 0x25cfea4 size 0x14 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "_keyChar", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "_key", ty: "::System::ConsoleKey", modifiers: "", def_value: None }, CppParam { name: "_mods", ty: "::System::ConsoleModifiers", modifiers: "", def_value: None }]
constexpr ConsoleKeyInfo(char16_t  _keyChar, ::System::ConsoleKey  _key, ::System::ConsoleModifiers  _mods) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConsoleKeyInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConsoleKeyInfo()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ConsoleKeyInfo, 0xc>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleKeyInfo, "System", "ConsoleKeyInfo");
