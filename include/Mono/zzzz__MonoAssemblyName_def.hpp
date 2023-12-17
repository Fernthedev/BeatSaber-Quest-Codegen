#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoAssemblyName)
namespace Mono {
struct __MonoAssemblyName___public_key_token_e__FixedBuffer;
}
// Forward declare root types
namespace Mono {
struct MonoAssemblyName;
}
namespace Mono {
struct __MonoAssemblyName___public_key_token_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::Mono::MonoAssemblyName);
MARK_VAL_T(::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer);
// Type: ::<public_key_token>e__FixedBuffer
namespace Mono {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2240))
// CS Name: ::MonoAssemblyName::<public_key_token>e__FixedBuffer
struct CORDL_TYPE __MonoAssemblyName___public_key_token_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x11> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x11};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) uint8_t  FixedElementField;

constexpr void __set_FixedElementField(uint8_t  value) ;

constexpr uint8_t& __get_FixedElementField() ;

constexpr uint8_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __MonoAssemblyName___public_key_token_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MonoAssemblyName___public_key_token_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x11>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MonoAssemblyName___public_key_token_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer, 0x11>, "Size mismatch!");

} // namespace end def Mono
// Type: Mono::MonoAssemblyName
namespace Mono {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2241))
// CS Name: ::Mono::MonoAssemblyName
struct CORDL_TYPE MonoAssemblyName : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
using _public_key_token_e__FixedBuffer = ::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field name offset 0x0
 __declspec(property(get=__get_name, put=__set_name)) ::cordl_internals::intptr_t  name;

/// @brief Field culture offset 0x8
 __declspec(property(get=__get_culture, put=__set_culture)) ::cordl_internals::intptr_t  culture;

/// @brief Field hash_value offset 0x10
 __declspec(property(get=__get_hash_value, put=__set_hash_value)) ::cordl_internals::intptr_t  hash_value;

/// @brief Field public_key offset 0x18
 __declspec(property(get=__get_public_key, put=__set_public_key)) ::cordl_internals::intptr_t  public_key;

/// @brief Field public_key_token offset 0x20
 __declspec(property(get=__get_public_key_token, put=__set_public_key_token)) ::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer  public_key_token;

/// @brief Field hash_alg offset 0x34
 __declspec(property(get=__get_hash_alg, put=__set_hash_alg)) uint32_t  hash_alg;

/// @brief Field hash_len offset 0x38
 __declspec(property(get=__get_hash_len, put=__set_hash_len)) uint32_t  hash_len;

/// @brief Field flags offset 0x3c
 __declspec(property(get=__get_flags, put=__set_flags)) uint32_t  flags;

/// @brief Field major offset 0x40
 __declspec(property(get=__get_major, put=__set_major)) uint16_t  major;

/// @brief Field minor offset 0x42
 __declspec(property(get=__get_minor, put=__set_minor)) uint16_t  minor;

/// @brief Field build offset 0x44
 __declspec(property(get=__get_build, put=__set_build)) uint16_t  build;

/// @brief Field revision offset 0x46
 __declspec(property(get=__get_revision, put=__set_revision)) uint16_t  revision;

/// @brief Field arch offset 0x48
 __declspec(property(get=__get_arch, put=__set_arch)) uint16_t  arch;

constexpr void __set_name(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_name() ;

constexpr ::cordl_internals::intptr_t const& __get_name() const;

constexpr void __set_culture(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_culture() ;

constexpr ::cordl_internals::intptr_t const& __get_culture() const;

constexpr void __set_hash_value(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_hash_value() ;

constexpr ::cordl_internals::intptr_t const& __get_hash_value() const;

constexpr void __set_public_key(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_public_key() ;

constexpr ::cordl_internals::intptr_t const& __get_public_key() const;

constexpr void __set_public_key_token(::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer  value) ;

constexpr ::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer& __get_public_key_token() ;

constexpr ::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer const& __get_public_key_token() const;

constexpr void __set_hash_alg(uint32_t  value) ;

constexpr uint32_t& __get_hash_alg() ;

constexpr uint32_t const& __get_hash_alg() const;

constexpr void __set_hash_len(uint32_t  value) ;

constexpr uint32_t& __get_hash_len() ;

constexpr uint32_t const& __get_hash_len() const;

constexpr void __set_flags(uint32_t  value) ;

constexpr uint32_t& __get_flags() ;

constexpr uint32_t const& __get_flags() const;

constexpr void __set_major(uint16_t  value) ;

constexpr uint16_t& __get_major() ;

constexpr uint16_t const& __get_major() const;

constexpr void __set_minor(uint16_t  value) ;

constexpr uint16_t& __get_minor() ;

constexpr uint16_t const& __get_minor() const;

constexpr void __set_build(uint16_t  value) ;

constexpr uint16_t& __get_build() ;

constexpr uint16_t const& __get_build() const;

constexpr void __set_revision(uint16_t  value) ;

constexpr uint16_t& __get_revision() ;

constexpr uint16_t const& __get_revision() const;

constexpr void __set_arch(uint16_t  value) ;

constexpr uint16_t& __get_arch() ;

constexpr uint16_t const& __get_arch() const;

// Ctor Parameters [CppParam { name: "name", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "culture", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "hash_value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "public_key", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "public_key_token", ty: "::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "hash_alg", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "hash_len", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "major", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "minor", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "build", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "revision", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "arch", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr MonoAssemblyName(::cordl_internals::intptr_t  name, ::cordl_internals::intptr_t  culture, ::cordl_internals::intptr_t  hash_value, ::cordl_internals::intptr_t  public_key, ::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer  public_key_token, uint32_t  hash_alg, uint32_t  hash_len, uint32_t  flags, uint16_t  major, uint16_t  minor, uint16_t  build, uint16_t  revision, uint16_t  arch) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MonoAssemblyName(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MonoAssemblyName()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::MonoAssemblyName, 0x50>, "Size mismatch!");

} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::MonoAssemblyName, "Mono", "MonoAssemblyName");
DEFINE_IL2CPP_ARG_TYPE(::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer, "Mono", "MonoAssemblyName/<public_key_token>e__FixedBuffer");
