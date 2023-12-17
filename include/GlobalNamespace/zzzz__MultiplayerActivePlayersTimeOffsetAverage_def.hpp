#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerActivePlayersTimeOffsetAverage)
namespace GlobalNamespace {
class IMultiplayerObservable;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerActivePlayersTimeOffsetAverage;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage);
// Type: ::MultiplayerActivePlayersTimeOffsetAverage
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5190))
// CS Name: ::MultiplayerActivePlayersTimeOffsetAverage*
class CORDL_TYPE MultiplayerActivePlayersTimeOffsetAverage : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _multiplayerSessionManager offset 0x10
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

/// @brief Field _lastReturnedOffsetSyncTime offset 0x18
 __declspec(property(get=__get__lastReturnedOffsetSyncTime, put=__set__lastReturnedOffsetSyncTime)) int64_t  _lastReturnedOffsetSyncTime;

/// @brief Field _timeOfLastValidReturnedTime offset 0x20
 __declspec(property(get=__get__timeOfLastValidReturnedTime, put=__set__timeOfLastValidReturnedTime)) int64_t  _timeOfLastValidReturnedTime;

 __declspec(property(get=get_offsetSyncTime)) int64_t  offsetSyncTime;

 __declspec(property(get=get_isFailed)) bool  isFailed;

/// @brief Convert operator to "::GlobalNamespace::IMultiplayerObservable"
constexpr operator  ::GlobalNamespace::IMultiplayerObservable*() noexcept;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

constexpr void __set__lastReturnedOffsetSyncTime(int64_t  value) ;

constexpr int64_t& __get__lastReturnedOffsetSyncTime() ;

constexpr int64_t const& __get__lastReturnedOffsetSyncTime() const;

constexpr void __set__timeOfLastValidReturnedTime(int64_t  value) ;

constexpr int64_t& __get__timeOfLastValidReturnedTime() ;

constexpr int64_t const& __get__timeOfLastValidReturnedTime() const;

/// @brief Method get_offsetSyncTime addr 0x22446e4 size 0x254 virtual true final true
inline int64_t get_offsetSyncTime() ;

/// @brief Method get_isFailed addr 0x2244938 size 0x148 virtual true final true
inline bool get_isFailed() ;

static inline ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage* New_ctor() ;

/// @brief Method .ctor addr 0x2244a80 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerActivePlayersTimeOffsetAverage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerActivePlayersTimeOffsetAverage(MultiplayerActivePlayersTimeOffsetAverage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerActivePlayersTimeOffsetAverage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerActivePlayersTimeOffsetAverage(MultiplayerActivePlayersTimeOffsetAverage const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerActivePlayersTimeOffsetAverage()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*, "", "MultiplayerActivePlayersTimeOffsetAverage");
