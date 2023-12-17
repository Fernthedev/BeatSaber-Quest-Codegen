#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRRenderModels)
namespace OVR::OpenVR {
struct EVRRenderModelError;
}
namespace OVR::OpenVR {
struct IVRRenderModels;
}
namespace OVR::OpenVR {
struct RenderModel_ComponentState_t;
}
namespace OVR::OpenVR {
struct __CVRRenderModels__GetComponentStateUnion;
}
namespace OVR::OpenVR {
struct VRControllerState_t;
}
namespace OVR::OpenVR {
class __CVRRenderModels___GetComponentStatePacked;
}
namespace OVR::OpenVR {
struct RenderModel_ControllerMode_State_t;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct VRControllerState_t_Packed;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetComponentState;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRRenderModels;
}
namespace OVR::OpenVR {
class __CVRRenderModels___GetComponentStatePacked;
}
namespace OVR::OpenVR {
struct __CVRRenderModels__GetComponentStateUnion;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRRenderModels);
MARK_REF_PTR_T(::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked);
MARK_VAL_T(::OVR::OpenVR::__CVRRenderModels__GetComponentStateUnion);
// Type: ::_GetComponentStatePacked
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8568))
// CS Name: ::CVRRenderModels::_GetComponentStatePacked*
class CORDL_TYPE __CVRRenderModels___GetComponentStatePacked : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27f4ecc size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27f4fa4 size 0x14 virtual true final false
inline bool Invoke(::StringW  pchRenderModelName, ::StringW  pchComponentName, ByRef<::OVR::OpenVR::VRControllerState_t_Packed>  pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState) ;

/// @brief Method BeginInvoke addr 0x27f4fb8 size 0x100 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchRenderModelName, ::StringW  pchComponentName, ByRef<::OVR::OpenVR::VRControllerState_t_Packed>  pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27f50b8 size 0x34 virtual true final false
inline bool EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t_Packed>  pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__CVRRenderModels___GetComponentStatePacked", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CVRRenderModels___GetComponentStatePacked(__CVRRenderModels___GetComponentStatePacked && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CVRRenderModels___GetComponentStatePacked", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CVRRenderModels___GetComponentStatePacked(__CVRRenderModels___GetComponentStatePacked const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CVRRenderModels___GetComponentStatePacked()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::GetComponentStateUnion
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8569))
// CS Name: ::CVRRenderModels::GetComponentStateUnion
struct CORDL_TYPE __CVRRenderModels__GetComponentStateUnion : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field pGetComponentState offset 0x0
 __declspec(property(get=__get_pGetComponentState, put=__set_pGetComponentState)) ::OVR::OpenVR::__IVRRenderModels___GetComponentState*  pGetComponentState;

/// @brief Field pGetComponentStatePacked offset 0x0
 __declspec(property(get=__get_pGetComponentStatePacked, put=__set_pGetComponentStatePacked)) ::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked*  pGetComponentStatePacked;

constexpr void __set_pGetComponentState(::OVR::OpenVR::__IVRRenderModels___GetComponentState*  value) ;

constexpr ::OVR::OpenVR::__IVRRenderModels___GetComponentState* __get_pGetComponentState() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___GetComponentState*> __get_pGetComponentState() const;

constexpr void __set_pGetComponentStatePacked(::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked*  value) ;

constexpr ::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked* __get_pGetComponentStatePacked() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked*> __get_pGetComponentStatePacked() const;

// Ctor Parameters [CppParam { name: "pGetComponentState", ty: "::OVR::OpenVR::__IVRRenderModels___GetComponentState*", modifiers: "", def_value: None }, CppParam { name: "pGetComponentStatePacked", ty: "::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked*", modifiers: "", def_value: None }]
constexpr __CVRRenderModels__GetComponentStateUnion(::OVR::OpenVR::__IVRRenderModels___GetComponentState*  pGetComponentState, ::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked*  pGetComponentStatePacked) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __CVRRenderModels__GetComponentStateUnion(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __CVRRenderModels__GetComponentStateUnion()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__CVRRenderModels__GetComponentStateUnion, 0x8>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::CVRRenderModels
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8570))
// CS Name: ::OVR.OpenVR::CVRRenderModels*
class CORDL_TYPE CVRRenderModels : public ::System::Object {
public:
// Declarations
using GetComponentStateUnion = ::OVR::OpenVR::__CVRRenderModels__GetComponentStateUnion;

using _GetComponentStatePacked = ::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::System::Object)]{};

/// @brief Field FnTable offset 0x10
 __declspec(property(get=__get_FnTable, put=__set_FnTable)) ::OVR::OpenVR::IVRRenderModels  FnTable;

constexpr void __set_FnTable(::OVR::OpenVR::IVRRenderModels  value) ;

constexpr ::OVR::OpenVR::IVRRenderModels& __get_FnTable() ;

constexpr ::OVR::OpenVR::IVRRenderModels const& __get_FnTable() const;

static inline ::OVR::OpenVR::CVRRenderModels* New_ctor(::cordl_internals::intptr_t  pInterface) ;

/// @brief Method .ctor addr 0x27f4998 size 0x114 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  pInterface) ;

/// @brief Method LoadRenderModel_Async addr 0x27f4aac size 0x24 virtual false final false
inline ::OVR::OpenVR::EVRRenderModelError LoadRenderModel_Async(::StringW  pchRenderModelName, ByRef<::cordl_internals::intptr_t>  ppRenderModel) ;

/// @brief Method FreeRenderModel addr 0x27f4ad0 size 0x24 virtual false final false
inline void FreeRenderModel(::cordl_internals::intptr_t  pRenderModel) ;

/// @brief Method LoadTexture_Async addr 0x27f4af4 size 0x24 virtual false final false
inline ::OVR::OpenVR::EVRRenderModelError LoadTexture_Async(int32_t  textureId, ByRef<::cordl_internals::intptr_t>  ppTexture) ;

/// @brief Method FreeTexture addr 0x27f4b18 size 0x24 virtual false final false
inline void FreeTexture(::cordl_internals::intptr_t  pTexture) ;

/// @brief Method LoadTextureD3D11_Async addr 0x27f4b3c size 0x24 virtual false final false
inline ::OVR::OpenVR::EVRRenderModelError LoadTextureD3D11_Async(int32_t  textureId, ::cordl_internals::intptr_t  pD3D11Device, ByRef<::cordl_internals::intptr_t>  ppD3D11Texture2D) ;

/// @brief Method LoadIntoTextureD3D11_Async addr 0x27f4b60 size 0x24 virtual false final false
inline ::OVR::OpenVR::EVRRenderModelError LoadIntoTextureD3D11_Async(int32_t  textureId, ::cordl_internals::intptr_t  pDstTexture) ;

/// @brief Method FreeTextureD3D11 addr 0x27f4b84 size 0x24 virtual false final false
inline void FreeTextureD3D11(::cordl_internals::intptr_t  pD3D11Texture2D) ;

/// @brief Method GetRenderModelName addr 0x27f4ba8 size 0x24 virtual false final false
inline uint32_t GetRenderModelName(uint32_t  unRenderModelIndex, ::System::Text::StringBuilder*  pchRenderModelName, uint32_t  unRenderModelNameLen) ;

/// @brief Method GetRenderModelCount addr 0x27f4bcc size 0x24 virtual false final false
inline uint32_t GetRenderModelCount() ;

/// @brief Method GetComponentCount addr 0x27f4bf0 size 0x24 virtual false final false
inline uint32_t GetComponentCount(::StringW  pchRenderModelName) ;

/// @brief Method GetComponentName addr 0x27f4c14 size 0x24 virtual false final false
inline uint32_t GetComponentName(::StringW  pchRenderModelName, uint32_t  unComponentIndex, ::System::Text::StringBuilder*  pchComponentName, uint32_t  unComponentNameLen) ;

/// @brief Method GetComponentButtonMask addr 0x27f4c38 size 0x24 virtual false final false
inline uint64_t GetComponentButtonMask(::StringW  pchRenderModelName, ::StringW  pchComponentName) ;

/// @brief Method GetComponentRenderModelName addr 0x27f4c5c size 0x24 virtual false final false
inline uint32_t GetComponentRenderModelName(::StringW  pchRenderModelName, ::StringW  pchComponentName, ::System::Text::StringBuilder*  pchComponentRenderModelName, uint32_t  unComponentRenderModelNameLen) ;

/// @brief Method GetComponentStateForDevicePath addr 0x27f4c80 size 0x24 virtual false final false
inline bool GetComponentStateForDevicePath(::StringW  pchRenderModelName, ::StringW  pchComponentName, uint64_t  devicePath, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState) ;

/// @brief Method GetComponentState addr 0x27f4ca4 size 0x138 virtual false final false
inline bool GetComponentState(::StringW  pchRenderModelName, ::StringW  pchComponentName, ByRef<::OVR::OpenVR::VRControllerState_t>  pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState) ;

/// @brief Method RenderModelHasComponent addr 0x27f4ddc size 0x24 virtual false final false
inline bool RenderModelHasComponent(::StringW  pchRenderModelName, ::StringW  pchComponentName) ;

/// @brief Method GetRenderModelThumbnailURL addr 0x27f4e00 size 0x24 virtual false final false
inline uint32_t GetRenderModelThumbnailURL(::StringW  pchRenderModelName, ::System::Text::StringBuilder*  pchThumbnailURL, uint32_t  unThumbnailURLLen, ByRef<::OVR::OpenVR::EVRRenderModelError>  peError) ;

/// @brief Method GetRenderModelOriginalPath addr 0x27f4e24 size 0x24 virtual false final false
inline uint32_t GetRenderModelOriginalPath(::StringW  pchRenderModelName, ::System::Text::StringBuilder*  pchOriginalPath, uint32_t  unOriginalPathLen, ByRef<::OVR::OpenVR::EVRRenderModelError>  peError) ;

/// @brief Method GetRenderModelErrorNameFromEnum addr 0x27f4e48 size 0x84 virtual false final false
inline ::StringW GetRenderModelErrorNameFromEnum(::OVR::OpenVR::EVRRenderModelError  error) ;

// Ctor Parameters [CppParam { name: "", ty: "CVRRenderModels", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CVRRenderModels(CVRRenderModels && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CVRRenderModels", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CVRRenderModels(CVRRenderModels const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CVRRenderModels()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRRenderModels, 0xa8>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRRenderModels);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRRenderModels*, "OVR.OpenVR", "CVRRenderModels");
NEED_NO_BOX(::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked*, "OVR.OpenVR", "CVRRenderModels/_GetComponentStatePacked");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__CVRRenderModels__GetComponentStateUnion, "OVR.OpenVR", "CVRRenderModels/GetComponentStateUnion");
