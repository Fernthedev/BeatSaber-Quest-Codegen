#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetMultiplayerInstanceRequest)
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
struct ServiceEnvironment;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
// Forward declare root types
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceRequest;
}
// Write type traits
MARK_VAL_T(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest);
// Type: BGNet.Core.GameLift::GetMultiplayerInstanceRequest
namespace BGNet::Core::GameLift {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13010))
// CS Name: ::BGNet.Core.GameLift::GetMultiplayerInstanceRequest
struct CORDL_TYPE GetMultiplayerInstanceRequest : public ::bs_hook::ValueTypeWrapper<0x98> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

/// @brief Field version offset 0x0
 __declspec(property(get=__get_version, put=__set_version)) ::StringW  version;

/// @brief Field serviceEnvironment offset 0x8
 __declspec(property(get=__get_serviceEnvironment, put=__set_serviceEnvironment)) ::GlobalNamespace::ServiceEnvironment  serviceEnvironment;

/// @brief Field singleUseAuthToken offset 0x10
 __declspec(property(get=__get_singleUseAuthToken, put=__set_singleUseAuthToken)) ::StringW  singleUseAuthToken;

/// @brief Field beatmapLevelSelectionMask offset 0x18
 __declspec(property(get=__get_beatmapLevelSelectionMask, put=__set_beatmapLevelSelectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask  beatmapLevelSelectionMask;

/// @brief Field gameplayServerConfiguration offset 0x40
 __declspec(property(get=__get_gameplayServerConfiguration, put=__set_gameplayServerConfiguration)) ::GlobalNamespace::GameplayServerConfiguration  gameplayServerConfiguration;

/// @brief Field userId offset 0x58
 __declspec(property(get=__get_userId, put=__set_userId)) ::StringW  userId;

/// @brief Field privateGameSecret offset 0x60
 __declspec(property(get=__get_privateGameSecret, put=__set_privateGameSecret)) ::StringW  privateGameSecret;

/// @brief Field privateGameCode offset 0x68
 __declspec(property(get=__get_privateGameCode, put=__set_privateGameCode)) ::StringW  privateGameCode;

/// @brief Field platform offset 0x70
 __declspec(property(get=__get_platform, put=__set_platform)) ::GlobalNamespace::__AuthenticationToken__Platform  platform;

/// @brief Field authUserId offset 0x78
 __declspec(property(get=__get_authUserId, put=__set_authUserId)) ::StringW  authUserId;

/// @brief Field gameliftRegionLatencies offset 0x80
 __declspec(property(get=__get_gameliftRegionLatencies, put=__set_gameliftRegionLatencies)) ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*  gameliftRegionLatencies;

/// @brief Field ticketId offset 0x88
 __declspec(property(get=__get_ticketId, put=__set_ticketId)) ::StringW  ticketId;

/// @brief Field placementId offset 0x90
 __declspec(property(get=__get_placementId, put=__set_placementId)) ::StringW  placementId;

constexpr void __set_version(::StringW  value) ;

constexpr ::StringW& __get_version() ;

constexpr ::StringW const& __get_version() const;

constexpr void __set_serviceEnvironment(::GlobalNamespace::ServiceEnvironment  value) ;

constexpr ::GlobalNamespace::ServiceEnvironment& __get_serviceEnvironment() ;

constexpr ::GlobalNamespace::ServiceEnvironment const& __get_serviceEnvironment() const;

constexpr void __set_singleUseAuthToken(::StringW  value) ;

constexpr ::StringW& __get_singleUseAuthToken() ;

constexpr ::StringW const& __get_singleUseAuthToken() const;

constexpr void __set_beatmapLevelSelectionMask(::GlobalNamespace::BeatmapLevelSelectionMask  value) ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get_beatmapLevelSelectionMask() ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get_beatmapLevelSelectionMask() const;

constexpr void __set_gameplayServerConfiguration(::GlobalNamespace::GameplayServerConfiguration  value) ;

constexpr ::GlobalNamespace::GameplayServerConfiguration& __get_gameplayServerConfiguration() ;

constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get_gameplayServerConfiguration() const;

constexpr void __set_userId(::StringW  value) ;

constexpr ::StringW& __get_userId() ;

constexpr ::StringW const& __get_userId() const;

constexpr void __set_privateGameSecret(::StringW  value) ;

constexpr ::StringW& __get_privateGameSecret() ;

constexpr ::StringW const& __get_privateGameSecret() const;

constexpr void __set_privateGameCode(::StringW  value) ;

constexpr ::StringW& __get_privateGameCode() ;

constexpr ::StringW const& __get_privateGameCode() const;

constexpr void __set_platform(::GlobalNamespace::__AuthenticationToken__Platform  value) ;

constexpr ::GlobalNamespace::__AuthenticationToken__Platform& __get_platform() ;

constexpr ::GlobalNamespace::__AuthenticationToken__Platform const& __get_platform() const;

constexpr void __set_authUserId(::StringW  value) ;

constexpr ::StringW& __get_authUserId() ;

constexpr ::StringW const& __get_authUserId() const;

constexpr void __set_gameliftRegionLatencies(::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>* __get_gameliftRegionLatencies() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*> __get_gameliftRegionLatencies() const;

constexpr void __set_ticketId(::StringW  value) ;

constexpr ::StringW& __get_ticketId() ;

constexpr ::StringW const& __get_ticketId() const;

constexpr void __set_placementId(::StringW  value) ;

constexpr ::StringW& __get_placementId() ;

constexpr ::StringW const& __get_placementId() const;

/// @brief Method .ctor addr 0xe6060c size 0x5c virtual false final false
inline void _ctor(::StringW  version, ::GlobalNamespace::ServiceEnvironment  serviceEnvironment, ::StringW  userId, ::GlobalNamespace::BeatmapLevelSelectionMask  beatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration  gameplayServerConfiguration, ::GlobalNamespace::__AuthenticationToken__Platform  platform, ::StringW  authUserId, ::StringW  singleUseAuthToken, ::StringW  privateGameSecret, ::StringW  privateGameCode, ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*  gameliftRegionLatencies, ::StringW  ticketId, ::StringW  placementId) ;

// Ctor Parameters [CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "serviceEnvironment", ty: "::GlobalNamespace::ServiceEnvironment", modifiers: "", def_value: None }, CppParam { name: "singleUseAuthToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelSelectionMask", ty: "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: None }, CppParam { name: "gameplayServerConfiguration", ty: "::GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "privateGameSecret", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "privateGameCode", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "platform", ty: "::GlobalNamespace::__AuthenticationToken__Platform", modifiers: "", def_value: None }, CppParam { name: "authUserId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "gameliftRegionLatencies", ty: "::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*", modifiers: "", def_value: None }, CppParam { name: "ticketId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "placementId", ty: "::StringW", modifiers: "", def_value: None }]
constexpr GetMultiplayerInstanceRequest(::StringW  version, ::GlobalNamespace::ServiceEnvironment  serviceEnvironment, ::StringW  singleUseAuthToken, ::GlobalNamespace::BeatmapLevelSelectionMask  beatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration  gameplayServerConfiguration, ::StringW  userId, ::StringW  privateGameSecret, ::StringW  privateGameCode, ::GlobalNamespace::__AuthenticationToken__Platform  platform, ::StringW  authUserId, ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*  gameliftRegionLatencies, ::StringW  ticketId, ::StringW  placementId) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GetMultiplayerInstanceRequest(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x98>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GetMultiplayerInstanceRequest()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, 0x98>, "Size mismatch!");

} // namespace end def BGNet::Core::GameLift
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, "BGNet.Core.GameLift", "GetMultiplayerInstanceRequest");
