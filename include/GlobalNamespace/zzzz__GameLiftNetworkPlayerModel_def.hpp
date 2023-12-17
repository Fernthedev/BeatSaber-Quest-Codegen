#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameLiftConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerModel_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GameLiftNetworkPlayerModel)
namespace GlobalNamespace {
struct PublicServerInfo;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
template<typename T>
class IConnectionInitParams_1;
}
namespace GlobalNamespace {
class __GameLiftConnectionManager__StartClientParams;
}
namespace BGNet::Core::GameLift {
class IGameLiftPlayerSessionProvider;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
class GameLiftConnectionManager;
}
namespace GlobalNamespace {
class __GameLiftConnectionManager__ConnectToServerParams;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
// Forward declare root types
namespace GlobalNamespace {
class GameLiftNetworkPlayerModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameLiftNetworkPlayerModel);
// Type: ::GameLiftNetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12737)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14962), inst: 2746 }), TypeDefinitionIndex(TypeDefinitionIndex(14962))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14941))
// CS Name: ::GameLiftNetworkPlayerModel*
class CORDL_TYPE GameLiftNetworkPlayerModel : public ::GlobalNamespace::NetworkPlayerModel_1<::GlobalNamespace::GameLiftConnectionManager*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x118};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x118 - sizeof(::GlobalNamespace::NetworkPlayerModel_1<::GlobalNamespace::GameLiftConnectionManager*>)]{};

/// @brief Field _gameLiftPlayerSessionProvider offset 0x100
 __declspec(property(get=__get__gameLiftPlayerSessionProvider, put=__set__gameLiftPlayerSessionProvider)) ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*  _gameLiftPlayerSessionProvider;

/// @brief Field _cachedConnectToServerParams offset 0x108
 __declspec(property(get=__get__cachedConnectToServerParams, put=__set__cachedConnectToServerParams)) ::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams*  _cachedConnectToServerParams;

/// @brief Field _cachedStartClientParams offset 0x110
 __declspec(property(get=__get__cachedStartClientParams, put=__set__cachedStartClientParams)) ::GlobalNamespace::__GameLiftConnectionManager__StartClientParams*  _cachedStartClientParams;

 __declspec(property(get=get_secret)) ::StringW  secret;

 __declspec(property(get=get_code)) ::StringW  code;

 __declspec(property(get=get_partyOwnerId)) ::StringW  partyOwnerId;

 __declspec(property(get=get_configuration)) ::GlobalNamespace::GameplayServerConfiguration  configuration;

 __declspec(property(get=get_selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask;

constexpr void __set__gameLiftPlayerSessionProvider(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*  value) ;

constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* __get__gameLiftPlayerSessionProvider() ;

constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*> __get__gameLiftPlayerSessionProvider() const;

constexpr void __set__cachedConnectToServerParams(::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams*  value) ;

constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams* __get__cachedConnectToServerParams() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams*> __get__cachedConnectToServerParams() const;

constexpr void __set__cachedStartClientParams(::GlobalNamespace::__GameLiftConnectionManager__StartClientParams*  value) ;

constexpr ::GlobalNamespace::__GameLiftConnectionManager__StartClientParams* __get__cachedStartClientParams() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameLiftConnectionManager__StartClientParams*> __get__cachedStartClientParams() const;

/// @brief Method get_secret addr 0x2636a98 size 0x54 virtual true final false
inline ::StringW get_secret() ;

/// @brief Method get_code addr 0x2636aec size 0x54 virtual true final false
inline ::StringW get_code() ;

/// @brief Method get_partyOwnerId addr 0x2636b40 size 0x8 virtual true final false
inline ::StringW get_partyOwnerId() ;

/// @brief Method get_configuration addr 0x2636b48 size 0x78 virtual true final false
inline ::GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method get_selectionMask addr 0x2636bc0 size 0x78 virtual true final false
inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method Update addr 0x2636c38 size 0xc0 virtual true final false
inline void Update() ;

/// @brief Method RefreshPublicServers addr 0x2636cf8 size 0xb8 virtual true final false
inline void RefreshPublicServers(::GlobalNamespace::BeatmapLevelSelectionMask  localSelectionMask, ::GlobalNamespace::GameplayServerConfiguration  localConfiguration, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*  onSuccess, ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*  onFailure) ;

/// @brief Method GetConnectToServerParams addr 0x2636db0 size 0xe8 virtual true final false
inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>* GetConnectToServerParams(::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::GlobalNamespace::GameplayServerConfiguration  configuration, ::StringW  secret, ::StringW  code) ;

/// @brief Method GetStartClientParams addr 0x2636e98 size 0xd0 virtual true final false
inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>* GetStartClientParams(::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::GlobalNamespace::GameplayServerConfiguration  configuration) ;

static inline ::GlobalNamespace::GameLiftNetworkPlayerModel* New_ctor() ;

/// @brief Method .ctor addr 0x2636f68 size 0xac virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftNetworkPlayerModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameLiftNetworkPlayerModel(GameLiftNetworkPlayerModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftNetworkPlayerModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameLiftNetworkPlayerModel(GameLiftNetworkPlayerModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameLiftNetworkPlayerModel()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameLiftNetworkPlayerModel, 0x118>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameLiftNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameLiftNetworkPlayerModel*, "", "GameLiftNetworkPlayerModel");
