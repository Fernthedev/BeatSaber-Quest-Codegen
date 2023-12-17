#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetMultiplayerInstanceResponse)
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
namespace GlobalNamespace {
struct MultiplayerPlacementErrorCode;
}
// Forward declare root types
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
}
// Write type traits
MARK_VAL_T(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse);
// Type: BGNet.Core.GameLift::GetMultiplayerInstanceResponse
namespace BGNet::Core::GameLift {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13011))
// CS Name: ::BGNet.Core.GameLift::GetMultiplayerInstanceResponse
struct CORDL_TYPE GetMultiplayerInstanceResponse : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field errorCode offset 0x0
 __declspec(property(get=__get_errorCode, put=__set_errorCode)) ::GlobalNamespace::MultiplayerPlacementErrorCode  errorCode;

/// @brief Field playerSessionInfo offset 0x8
 __declspec(property(get=__get_playerSessionInfo, put=__set_playerSessionInfo)) ::BGNet::Core::GameLift::PlayerSessionInfo*  playerSessionInfo;

/// @brief Field pollIntervalMs offset 0x10
 __declspec(property(get=__get_pollIntervalMs, put=__set_pollIntervalMs)) int32_t  pollIntervalMs;

/// @brief Field ticketId offset 0x18
 __declspec(property(get=__get_ticketId, put=__set_ticketId)) ::StringW  ticketId;

/// @brief Field ticketStatus offset 0x20
 __declspec(property(get=__get_ticketStatus, put=__set_ticketStatus)) ::StringW  ticketStatus;

/// @brief Field placementId offset 0x28
 __declspec(property(get=__get_placementId, put=__set_placementId)) ::StringW  placementId;

/// @brief Field placementStatus offset 0x30
 __declspec(property(get=__get_placementStatus, put=__set_placementStatus)) ::StringW  placementStatus;

constexpr void __set_errorCode(::GlobalNamespace::MultiplayerPlacementErrorCode  value) ;

constexpr ::GlobalNamespace::MultiplayerPlacementErrorCode& __get_errorCode() ;

constexpr ::GlobalNamespace::MultiplayerPlacementErrorCode const& __get_errorCode() const;

constexpr void __set_playerSessionInfo(::BGNet::Core::GameLift::PlayerSessionInfo*  value) ;

constexpr ::BGNet::Core::GameLift::PlayerSessionInfo* __get_playerSessionInfo() ;

constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::GameLift::PlayerSessionInfo*> __get_playerSessionInfo() const;

constexpr void __set_pollIntervalMs(int32_t  value) ;

constexpr int32_t& __get_pollIntervalMs() ;

constexpr int32_t const& __get_pollIntervalMs() const;

constexpr void __set_ticketId(::StringW  value) ;

constexpr ::StringW& __get_ticketId() ;

constexpr ::StringW const& __get_ticketId() const;

constexpr void __set_ticketStatus(::StringW  value) ;

constexpr ::StringW& __get_ticketStatus() ;

constexpr ::StringW const& __get_ticketStatus() const;

constexpr void __set_placementId(::StringW  value) ;

constexpr ::StringW& __get_placementId() ;

constexpr ::StringW const& __get_placementId() const;

constexpr void __set_placementStatus(::StringW  value) ;

constexpr ::StringW& __get_placementStatus() ;

constexpr ::StringW const& __get_placementStatus() const;

/// @brief Method .ctor addr 0xe60ec4 size 0x18 virtual false final false
inline void _ctor(::GlobalNamespace::MultiplayerPlacementErrorCode  errorCode, ::BGNet::Core::GameLift::PlayerSessionInfo*  playerSessionInfo, int32_t  pollIntervalMs, ::StringW  ticketId, ::StringW  ticketStatus, ::StringW  placementId, ::StringW  placementStatus) ;

// Ctor Parameters [CppParam { name: "errorCode", ty: "::GlobalNamespace::MultiplayerPlacementErrorCode", modifiers: "", def_value: None }, CppParam { name: "playerSessionInfo", ty: "::BGNet::Core::GameLift::PlayerSessionInfo*", modifiers: "", def_value: None }, CppParam { name: "pollIntervalMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ticketId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ticketStatus", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "placementId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "placementStatus", ty: "::StringW", modifiers: "", def_value: None }]
constexpr GetMultiplayerInstanceResponse(::GlobalNamespace::MultiplayerPlacementErrorCode  errorCode, ::BGNet::Core::GameLift::PlayerSessionInfo*  playerSessionInfo, int32_t  pollIntervalMs, ::StringW  ticketId, ::StringW  ticketStatus, ::StringW  placementId, ::StringW  placementStatus) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GetMultiplayerInstanceResponse(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GetMultiplayerInstanceResponse()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, 0x38>, "Size mismatch!");

} // namespace end def BGNet::Core::GameLift
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, "BGNet.Core.GameLift", "GetMultiplayerInstanceResponse");
