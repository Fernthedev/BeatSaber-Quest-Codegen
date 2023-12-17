#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecureString)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security {
class SecureString;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::SecureString);
// Type: System.Security::SecureString
namespace System::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2885))
// CS Name: ::System.Security::SecureString*
class CORDL_TYPE SecureString : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field length offset 0x10
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

/// @brief Field disposed offset 0x14
 __declspec(property(get=__get_disposed, put=__set_disposed)) bool  disposed;

/// @brief Field data offset 0x18
 __declspec(property(get=__get_data, put=__set_data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  data;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

constexpr void __set_disposed(bool  value) ;

constexpr bool& __get_disposed() ;

constexpr bool const& __get_disposed() const;

constexpr void __set_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_data() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_data() const;

static inline ::System::Security::SecureString* New_ctor() ;

/// @brief Method .ctor addr 0x245294c size 0x24 virtual false final false
inline void _ctor() ;

static inline ::System::Security::SecureString* New_ctor(::cordl_internals::Ptr<char16_t>  value, int32_t  length) ;

/// @brief Method .ctor addr 0x2452aec size 0x14c virtual false final false
inline void _ctor(::cordl_internals::Ptr<char16_t>  value, int32_t  length) ;

/// @brief Method get_Length addr 0x2452c3c size 0x64 virtual false final false
inline int32_t get_Length() ;

/// @brief Method Dispose addr 0x2452ca0 size 0x38 virtual true final true
inline void Dispose() ;

/// @brief Method Encrypt addr 0x2452c38 size 0x4 virtual false final false
inline void Encrypt() ;

/// @brief Method Decrypt addr 0x2452cd8 size 0x4 virtual false final false
inline void Decrypt() ;

/// @brief Method Alloc addr 0x2452970 size 0x17c virtual false final false
inline void Alloc(int32_t  length, bool  realloc) ;

/// @brief Method GetBuffer addr 0x2452cdc size 0xb0 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBuffer() ;

// Ctor Parameters [CppParam { name: "", ty: "SecureString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecureString(SecureString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecureString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecureString(SecureString const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SecureString()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::SecureString, 0x20>, "Size mismatch!");

} // namespace end def System::Security
NEED_NO_BOX(::System::Security::SecureString);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecureString*, "System.Security", "SecureString");
