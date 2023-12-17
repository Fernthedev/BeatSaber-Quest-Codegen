#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SyncTimeProvider)
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class ITimeProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class SyncTimeProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SyncTimeProvider);
// Type: ::SyncTimeProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5386))
// CS Name: ::SyncTimeProvider*
class CORDL_TYPE SyncTimeProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _multiplayerSessionManager offset 0x10
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

 __declspec(property(get=get_time)) int64_t  time;

/// @brief Convert operator to "::GlobalNamespace::ITimeProvider"
constexpr operator  ::GlobalNamespace::ITimeProvider*() noexcept;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

/// @brief Method get_time addr 0x226ef60 size 0xa4 virtual true final true
inline int64_t get_time() ;

static inline ::GlobalNamespace::SyncTimeProvider* New_ctor() ;

/// @brief Method .ctor addr 0x226f004 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SyncTimeProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncTimeProvider(SyncTimeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncTimeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncTimeProvider(SyncTimeProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SyncTimeProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SyncTimeProvider, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SyncTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SyncTimeProvider*, "", "SyncTimeProvider");
