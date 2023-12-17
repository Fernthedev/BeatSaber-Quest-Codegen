#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TestInvitePlatformHandler)
namespace GlobalNamespace {
class IInvitePlatformHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class TestInvitePlatformHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TestInvitePlatformHandler);
// Type: ::TestInvitePlatformHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4497))
// CS Name: ::TestInvitePlatformHandler*
class CORDL_TYPE TestInvitePlatformHandler : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_isSupported)) bool  isSupported;

/// @brief Convert operator to "::GlobalNamespace::IInvitePlatformHandler"
constexpr operator  ::GlobalNamespace::IInvitePlatformHandler*() noexcept;

/// @brief Method get_isSupported addr 0x2355cbc size 0x8 virtual true final true
inline bool get_isSupported() ;

/// @brief Method OpenInvitePanel addr 0x2355cc4 size 0x68 virtual true final true
inline void OpenInvitePanel() ;

static inline ::GlobalNamespace::TestInvitePlatformHandler* New_ctor() ;

/// @brief Method .ctor addr 0x2355d2c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TestInvitePlatformHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TestInvitePlatformHandler(TestInvitePlatformHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestInvitePlatformHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestInvitePlatformHandler(TestInvitePlatformHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TestInvitePlatformHandler()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestInvitePlatformHandler, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TestInvitePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestInvitePlatformHandler*, "", "TestInvitePlatformHandler");
