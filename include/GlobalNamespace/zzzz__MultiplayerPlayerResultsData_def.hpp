#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerPlayerResultsData)
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace System {
class IComparable;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerPlayerResultsData);
// Type: ::MultiplayerPlayerResultsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5236))
// CS Name: ::MultiplayerPlayerResultsData*
class CORDL_TYPE MultiplayerPlayerResultsData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field connectedPlayer offset 0x10
 __declspec(property(get=__get_connectedPlayer, put=__set_connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  connectedPlayer;

/// @brief Field multiplayerLevelCompletionResults offset 0x18
 __declspec(property(get=__get_multiplayerLevelCompletionResults, put=__set_multiplayerLevelCompletionResults)) ::GlobalNamespace::MultiplayerLevelCompletionResults*  multiplayerLevelCompletionResults;

/// @brief Field badge offset 0x20
 __declspec(property(get=__get_badge, put=__set_badge)) ::GlobalNamespace::MultiplayerBadgeAwardData*  badge;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

constexpr void __set_connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get_connectedPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get_connectedPlayer() const;

constexpr void __set_multiplayerLevelCompletionResults(::GlobalNamespace::MultiplayerLevelCompletionResults*  value) ;

constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults* __get_multiplayerLevelCompletionResults() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelCompletionResults*> __get_multiplayerLevelCompletionResults() const;

constexpr void __set_badge(::GlobalNamespace::MultiplayerBadgeAwardData*  value) ;

constexpr ::GlobalNamespace::MultiplayerBadgeAwardData* __get_badge() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerBadgeAwardData*> __get_badge() const;

static inline ::GlobalNamespace::MultiplayerPlayerResultsData* New_ctor(::GlobalNamespace::IConnectedPlayer*  connectedPlayer, ::GlobalNamespace::MultiplayerLevelCompletionResults*  multiplayerLevelCompletionResults) ;

/// @brief Method .ctor addr 0x22569f8 size 0x2c virtual false final false
inline void _ctor(::GlobalNamespace::IConnectedPlayer*  connectedPlayer, ::GlobalNamespace::MultiplayerLevelCompletionResults*  multiplayerLevelCompletionResults) ;

/// @brief Method CompareTo addr 0x2256a24 size 0x1e0 virtual true final true
inline int32_t CompareTo(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerResultsData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerPlayerResultsData(MultiplayerPlayerResultsData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerResultsData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerPlayerResultsData(MultiplayerPlayerResultsData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerPlayerResultsData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPlayerResultsData, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPlayerResultsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlayerResultsData*, "", "MultiplayerPlayerResultsData");
