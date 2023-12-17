#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_PDGSession)
namespace HoudiniEngineUnity {
class HEU_TOPNetworkData;
}
namespace HoudiniEngineUnity {
class HEU_TOPNodeData;
}
namespace HoudiniEngineUnity {
struct __HEU_TOPNodeData__PDGState;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace HoudiniEngineUnity {
class HEU_PDGAssetLink;
}
namespace HoudiniEngineUnity {
struct __HEU_PDGSession__EventMessageColor;
}
namespace HoudiniEngineUnity {
struct HAPI_PDG_State;
}
namespace HoudiniEngineUnity {
struct HAPI_PDG_EventInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_PDGSession__EventMessageColor;
}
namespace HoudiniEngineUnity {
class HEU_PDGSession;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_PDGSession__EventMessageColor);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_PDGSession);
// Type: ::EventMessageColor
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9775))
// CS Name: ::HEU_PDGSession::EventMessageColor
struct CORDL_TYPE __HEU_PDGSession__EventMessageColor : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____HEU_PDGSession__EventMessageColor_Unwrapped
enum struct ____HEU_PDGSession__EventMessageColor_Unwrapped : int32_t {
__E_DEFAULT = static_cast<int32_t>(0x0),
__E_WARNING = static_cast<int32_t>(0x1),
__E_ERROR = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field DEFAULT value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::__HEU_PDGSession__EventMessageColor const DEFAULT;

/// @brief Field WARNING value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::__HEU_PDGSession__EventMessageColor const WARNING;

/// @brief Field ERROR value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::__HEU_PDGSession__EventMessageColor const ERROR;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____HEU_PDGSession__EventMessageColor_Unwrapped () const noexcept {
return std::bit_cast<____HEU_PDGSession__EventMessageColor_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HEU_PDGSession__EventMessageColor(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HEU_PDGSession__EventMessageColor(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HEU_PDGSession__EventMessageColor()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_PDGSession__EventMessageColor, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_PDGSession
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9776))
// CS Name: ::HoudiniEngineUnity::HEU_PDGSession*
class CORDL_TYPE HEU_PDGSession : public ::System::Object {
public:
// Declarations
using EventMessageColor = ::HoudiniEngineUnity::__HEU_PDGSession__EventMessageColor;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Object)]{};

/// @brief Field _pdgAssets offset 0x10
 __declspec(property(get=__get__pdgAssets, put=__set__pdgAssets)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PDGAssetLink*>*  _pdgAssets;

/// @brief Field _pdgMaxProcessEvents offset 0x18
 __declspec(property(get=__get__pdgMaxProcessEvents, put=__set__pdgMaxProcessEvents)) int32_t  _pdgMaxProcessEvents;

/// @brief Field _pdgQueryEvents offset 0x20
 __declspec(property(get=__get__pdgQueryEvents, put=__set__pdgQueryEvents)) ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo,::Array<::HoudiniEngineUnity::HAPI_PDG_EventInfo>*>  _pdgQueryEvents;

/// @brief Field _pdgContextSize offset 0x28
 __declspec(property(get=__get__pdgContextSize, put=__set__pdgContextSize)) int32_t  _pdgContextSize;

/// @brief Field _pdgContextIDs offset 0x30
 __declspec(property(get=__get__pdgContextIDs, put=__set__pdgContextIDs)) ::ArrayW<int32_t,::Array<int32_t>*>  _pdgContextIDs;

/// @brief Field _errored offset 0x38
 __declspec(property(get=__get__errored, put=__set__errored)) bool  _errored;

/// @brief Field _errorMsg offset 0x40
 __declspec(property(get=__get__errorMsg, put=__set__errorMsg)) ::StringW  _errorMsg;

/// @brief Field _pdgState offset 0x48
 __declspec(property(get=__get__pdgState, put=__set__pdgState)) ::HoudiniEngineUnity::HAPI_PDG_State  _pdgState;

/// @brief Field _pdgEventMessages offset 0x50
 __declspec(property(get=__get__pdgEventMessages, put=__set__pdgEventMessages)) ::System::Text::StringBuilder*  _pdgEventMessages;

/// @brief Field _eventMessageColorCode offset 0x58
 __declspec(property(get=__get__eventMessageColorCode, put=__set__eventMessageColorCode)) ::ArrayW<::StringW,::Array<::StringW>*>  _eventMessageColorCode;

static inline void setStaticF__pdgSession(::HoudiniEngineUnity::HEU_PDGSession*  value) ;

static inline ::HoudiniEngineUnity::HEU_PDGSession* getStaticF__pdgSession() ;

constexpr void __set__pdgAssets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PDGAssetLink*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PDGAssetLink*>* __get__pdgAssets() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PDGAssetLink*>*> __get__pdgAssets() const;

constexpr void __set__pdgMaxProcessEvents(int32_t  value) ;

constexpr int32_t& __get__pdgMaxProcessEvents() ;

constexpr int32_t const& __get__pdgMaxProcessEvents() const;

constexpr void __set__pdgQueryEvents(::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo,::Array<::HoudiniEngineUnity::HAPI_PDG_EventInfo>*>  value) ;

constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo,::Array<::HoudiniEngineUnity::HAPI_PDG_EventInfo>*>& __get__pdgQueryEvents() ;

constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo,::Array<::HoudiniEngineUnity::HAPI_PDG_EventInfo>*> const& __get__pdgQueryEvents() const;

constexpr void __set__pdgContextSize(int32_t  value) ;

constexpr int32_t& __get__pdgContextSize() ;

constexpr int32_t const& __get__pdgContextSize() const;

constexpr void __set__pdgContextIDs(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__pdgContextIDs() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__pdgContextIDs() const;

constexpr void __set__errored(bool  value) ;

constexpr bool& __get__errored() ;

constexpr bool const& __get__errored() const;

constexpr void __set__errorMsg(::StringW  value) ;

constexpr ::StringW& __get__errorMsg() ;

constexpr ::StringW const& __get__errorMsg() const;

constexpr void __set__pdgState(::HoudiniEngineUnity::HAPI_PDG_State  value) ;

constexpr ::HoudiniEngineUnity::HAPI_PDG_State& __get__pdgState() ;

constexpr ::HoudiniEngineUnity::HAPI_PDG_State const& __get__pdgState() const;

constexpr void __set__pdgEventMessages(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get__pdgEventMessages() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get__pdgEventMessages() const;

constexpr void __set__eventMessageColorCode(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get__eventMessageColorCode() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get__eventMessageColorCode() const;

/// @brief Method GetPDGSession addr 0x21994d0 size 0x7c virtual false final false
static inline ::HoudiniEngineUnity::HEU_PDGSession* GetPDGSession() ;

static inline ::HoudiniEngineUnity::HEU_PDGSession* New_ctor() ;

/// @brief Method .ctor addr 0x219cb38 size 0x1b4 virtual false final false
inline void _ctor() ;

/// @brief Method AddAsset addr 0x219ccec size 0x4 virtual false final false
inline void AddAsset(::HoudiniEngineUnity::HEU_PDGAssetLink*  asset) ;

/// @brief Method RemoveAsset addr 0x219954c size 0x4 virtual false final false
inline void RemoveAsset(::HoudiniEngineUnity::HEU_PDGAssetLink*  asset) ;

/// @brief Method Update addr 0x219ccf0 size 0x4 virtual false final false
inline void Update() ;

/// @brief Method CleanUp addr 0x219ccf4 size 0xfc virtual false final false
inline void CleanUp() ;

/// @brief Method UpdatePDGContext addr 0x219cdf0 size 0x4 virtual false final false
inline void UpdatePDGContext() ;

/// @brief Method ReinitializePDGContext addr 0x219cdf4 size 0x4 virtual false final false
inline void ReinitializePDGContext() ;

/// @brief Method ProcessPDGEvent addr 0x219cdf8 size 0x4 virtual false final false
inline void ProcessPDGEvent(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  contextID, ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo>  eventInfo) ;

/// @brief Method GetTOPAssetLinkAndNode addr 0x219cdfc size 0xe8 virtual false final false
inline bool GetTOPAssetLinkAndNode(int32_t  nodeID, ByRef<::HoudiniEngineUnity::HEU_PDGAssetLink*>  assetLink, ByRef<::HoudiniEngineUnity::HEU_TOPNodeData*>  topNode) ;

/// @brief Method SetTOPNodePDGState addr 0x219cee4 size 0x38 virtual false final false
inline void SetTOPNodePDGState(::HoudiniEngineUnity::HEU_PDGAssetLink*  assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData*  topNode, ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState  pdgState) ;

/// @brief Method NotifyTOPNodePDGStateClear addr 0x219cf1c size 0x48 virtual false final false
inline void NotifyTOPNodePDGStateClear(::HoudiniEngineUnity::HEU_PDGAssetLink*  assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData*  topNode) ;

/// @brief Method NotifyTOPNodeTotalWorkItem addr 0x219cf64 size 0x4c virtual false final false
inline void NotifyTOPNodeTotalWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink*  assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData*  topNode, int32_t  inc) ;

/// @brief Method NotifyTOPNodeCookedWorkItem addr 0x219cfb0 size 0x48 virtual false final false
inline void NotifyTOPNodeCookedWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink*  assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData*  topNode) ;

/// @brief Method NotifyTOPNodeErrorWorkItem addr 0x219cff8 size 0x48 virtual false final false
inline void NotifyTOPNodeErrorWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink*  assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData*  topNode) ;

/// @brief Method NotifyTOPNodeWaitingWorkItem addr 0x219d040 size 0x4c virtual false final false
inline void NotifyTOPNodeWaitingWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink*  assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData*  topNode, int32_t  inc) ;

/// @brief Method NotifyTOPNodeScheduledWorkItem addr 0x219d08c size 0x4c virtual false final false
inline void NotifyTOPNodeScheduledWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink*  assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData*  topNode, int32_t  inc) ;

/// @brief Method NotifyTOPNodeCookingWorkItem addr 0x219d0d8 size 0x4c virtual false final false
inline void NotifyTOPNodeCookingWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink*  assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData*  topNode, int32_t  inc) ;

/// @brief Method ResetPDGEventInfo addr 0x219d124 size 0x14 virtual false final false
static inline void ResetPDGEventInfo(ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo>  eventInfo) ;

/// @brief Method SetErrorState addr 0x219d138 size 0x40 virtual false final false
inline void SetErrorState(::StringW  msg, bool  bLogIt) ;

/// @brief Method ClearErrorState addr 0x219d178 size 0x4c virtual false final false
inline void ClearErrorState() ;

/// @brief Method GetHAPIPDGSession addr 0x219d1c4 size 0x68 virtual false final false
inline ::HoudiniEngineUnity::HEU_SessionBase* GetHAPIPDGSession(bool  bCreate) ;

/// @brief Method CookTOPNetworkOutputNode addr 0x219b9b0 size 0x4 virtual false final false
inline void CookTOPNetworkOutputNode(::HoudiniEngineUnity::HEU_TOPNetworkData*  topNetwork) ;

/// @brief Method PauseCook addr 0x219ba14 size 0x4 virtual false final false
inline void PauseCook(::HoudiniEngineUnity::HEU_TOPNetworkData*  topNetwork) ;

/// @brief Method CancelCook addr 0x219ba78 size 0x4 virtual false final false
inline void CancelCook(::HoudiniEngineUnity::HEU_TOPNetworkData*  topNetwork) ;

/// @brief Method ClearWorkItemResult addr 0x219d53c size 0x4 virtual false final false
inline void ClearWorkItemResult(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  contextID, ::HoudiniEngineUnity::HAPI_PDG_EventInfo  eventInfo, ::HoudiniEngineUnity::HEU_TOPNodeData*  topNode) ;

/// @brief Method DirtyTOPNode addr 0x219b8a4 size 0x8 virtual false final false
inline bool DirtyTOPNode(int32_t  nodeID) ;

/// @brief Method CookTOPNode addr 0x219b8cc size 0x8 virtual false final false
inline bool CookTOPNode(int32_t  nodeID) ;

/// @brief Method DirtyAll addr 0x219b8f4 size 0x8 virtual false final false
inline bool DirtyAll(int32_t  nodeID) ;

/// @brief Method AddEventMessage addr 0x219d540 size 0x1c virtual false final false
inline void AddEventMessage(::StringW  msg) ;

/// @brief Method GetEventMessages addr 0x219d55c size 0x20 virtual false final false
inline ::StringW GetEventMessages() ;

/// @brief Method ClearEventMessages addr 0x219d57c size 0x20 virtual false final false
inline void ClearEventMessages() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PDGSession", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_PDGSession(HEU_PDGSession && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PDGSession", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_PDGSession(HEU_PDGSession const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_PDGSession()  = default;
public:


// Fields

// Static field _pdgSession


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PDGSession, 0x60>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_PDGSession__EventMessageColor, "HoudiniEngineUnity", "HEU_PDGSession/EventMessageColor");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PDGSession);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PDGSession*, "HoudiniEngineUnity", "HEU_PDGSession");
