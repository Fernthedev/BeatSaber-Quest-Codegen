#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsImpersonationContext)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Principal {
class WindowsImpersonationContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::WindowsImpersonationContext);
// Type: System.Security.Principal::WindowsImpersonationContext
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3007))
// CS Name: ::System.Security.Principal::WindowsImpersonationContext*
class CORDL_TYPE WindowsImpersonationContext : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _token offset 0x10
 __declspec(property(get=__get__token, put=__set__token)) ::cordl_internals::intptr_t  _token;

/// @brief Field undo offset 0x18
 __declspec(property(get=__get_undo, put=__set_undo)) bool  undo;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__token(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get__token() ;

constexpr ::cordl_internals::intptr_t const& __get__token() const;

constexpr void __set_undo(bool  value) ;

constexpr bool& __get_undo() ;

constexpr bool const& __get_undo() const;

static inline ::System::Security::Principal::WindowsImpersonationContext* New_ctor(::cordl_internals::intptr_t  token) ;

/// @brief Method .ctor addr 0x247af8c size 0x8c virtual false final false
inline void _ctor(::cordl_internals::intptr_t  token) ;

/// @brief Method Dispose addr 0x247b698 size 0x10 virtual true final true
inline void Dispose() ;

/// @brief Method Undo addr 0x247b6a8 size 0xc4 virtual false final false
inline void Undo() ;

/// @brief Method CloseToken addr 0x247b770 size 0x4 virtual false final false
static inline bool CloseToken(::cordl_internals::intptr_t  token) ;

/// @brief Method DuplicateToken addr 0x247b690 size 0x4 virtual false final false
static inline ::cordl_internals::intptr_t DuplicateToken(::cordl_internals::intptr_t  token) ;

/// @brief Method SetCurrentToken addr 0x247b694 size 0x4 virtual false final false
static inline bool SetCurrentToken(::cordl_internals::intptr_t  token) ;

/// @brief Method RevertToSelf addr 0x247b76c size 0x4 virtual false final false
static inline bool RevertToSelf() ;

// Ctor Parameters [CppParam { name: "", ty: "WindowsImpersonationContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowsImpersonationContext(WindowsImpersonationContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowsImpersonationContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowsImpersonationContext(WindowsImpersonationContext const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WindowsImpersonationContext()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::WindowsImpersonationContext, 0x20>, "Size mismatch!");

} // namespace end def System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::WindowsImpersonationContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::WindowsImpersonationContext*, "System.Security.Principal", "WindowsImpersonationContext");
