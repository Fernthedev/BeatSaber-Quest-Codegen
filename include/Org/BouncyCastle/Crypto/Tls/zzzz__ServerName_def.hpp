#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServerName)
namespace System {
class Object;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ServerName;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ServerName);
// Type: Org.BouncyCastle.Crypto.Tls::ServerName
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1267))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ServerName*
class CORDL_TYPE ServerName : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field mNameType offset 0x10
 __declspec(property(get=__get_mNameType, put=__set_mNameType)) uint8_t  mNameType;

/// @brief Field mName offset 0x18
 __declspec(property(get=__get_mName, put=__set_mName)) ::System::Object*  mName;

 __declspec(property(get=get_NameType)) uint8_t  NameType;

 __declspec(property(get=get_Name)) ::System::Object*  Name;

constexpr void __set_mNameType(uint8_t  value) ;

constexpr uint8_t& __get_mNameType() ;

constexpr uint8_t const& __get_mNameType() const;

constexpr void __set_mName(::System::Object*  value) ;

constexpr ::System::Object* __get_mName() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_mName() const;

static inline ::Org::BouncyCastle::Crypto::Tls::ServerName* New_ctor(uint8_t  nameType, ::System::Object*  name) ;

/// @brief Method .ctor addr 0xf94d8c size 0xa0 virtual false final false
inline void _ctor(uint8_t  nameType, ::System::Object*  name) ;

/// @brief Method get_NameType addr 0xf94ef4 size 0x8 virtual true final false
inline uint8_t get_NameType() ;

/// @brief Method get_Name addr 0xf94efc size 0x8 virtual true final false
inline ::System::Object* get_Name() ;

/// @brief Method GetHostName addr 0xf94f04 size 0xdc virtual true final false
inline ::StringW GetHostName() ;

/// @brief Method Encode addr 0xf94fe0 size 0x124 virtual true final false
inline void Encode(::System::IO::Stream*  output) ;

/// @brief Method Parse addr 0xf95104 size 0x118 virtual false final false
static inline ::Org::BouncyCastle::Crypto::Tls::ServerName* Parse(::System::IO::Stream*  input) ;

/// @brief Method IsCorrectType addr 0xf94e2c size 0xc8 virtual false final false
static inline bool IsCorrectType(uint8_t  nameType, ::System::Object*  name) ;

// Ctor Parameters [CppParam { name: "", ty: "ServerName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerName(ServerName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerName(ServerName const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ServerName()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ServerName, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ServerName);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ServerName*, "Org.BouncyCastle.Crypto.Tls", "ServerName");
