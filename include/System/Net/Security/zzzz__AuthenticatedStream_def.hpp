#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
CORDL_MODULE_EXPORT(AuthenticatedStream)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Net::Security {
class AuthenticatedStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Security::AuthenticatedStream);
// Type: System.Net.Security::AuthenticatedStream
namespace System::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9364))
// CS Name: ::System.Net.Security::AuthenticatedStream*
class CORDL_TYPE AuthenticatedStream : public ::System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::IO::Stream)]{};

/// @brief Field _InnerStream offset 0x28
 __declspec(property(get=__get__InnerStream, put=__set__InnerStream)) ::System::IO::Stream*  _InnerStream;

/// @brief Field _LeaveStreamOpen offset 0x30
 __declspec(property(get=__get__LeaveStreamOpen, put=__set__LeaveStreamOpen)) bool  _LeaveStreamOpen;

 __declspec(property(get=get_InnerStream)) ::System::IO::Stream*  InnerStream;

 __declspec(property(get=get_IsAuthenticated)) bool  IsAuthenticated;

constexpr void __set__InnerStream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get__InnerStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get__InnerStream() const;

constexpr void __set__LeaveStreamOpen(bool  value) ;

constexpr bool& __get__LeaveStreamOpen() ;

constexpr bool const& __get__LeaveStreamOpen() const;

static inline ::System::Net::Security::AuthenticatedStream* New_ctor(::System::IO::Stream*  innerStream, bool  leaveInnerStreamOpen) ;

/// @brief Method .ctor addr 0x28ff760 size 0x198 virtual false final false
inline void _ctor(::System::IO::Stream*  innerStream, bool  leaveInnerStreamOpen) ;

/// @brief Method get_InnerStream addr 0x28ff8f8 size 0x8 virtual false final false
inline ::System::IO::Stream* get_InnerStream() ;

/// @brief Method Dispose addr 0x28ff900 size 0xe8 virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method get_IsAuthenticated addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_IsAuthenticated() ;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatedStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticatedStream(AuthenticatedStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatedStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticatedStream(AuthenticatedStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AuthenticatedStream()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Security::AuthenticatedStream, 0x38>, "Size mismatch!");

} // namespace end def System::Net::Security
NEED_NO_BOX(::System::Net::Security::AuthenticatedStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::AuthenticatedStream*, "System.Net.Security", "AuthenticatedStream");
