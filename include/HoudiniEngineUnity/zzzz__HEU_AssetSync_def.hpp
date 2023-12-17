#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AssetSync)
namespace HoudiniEngineUnity {
class __HEU_AssetSync__AssetSyncCallback;
}
namespace UnityEngine {
class Transform;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class __HEU_ThreadedTaskLoadGeo__HEU_LoadCallback;
}
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
class HEU_ThreadedTaskLoadGeo;
}
namespace HoudiniEngineUnity {
class __HEU_ThreadedTaskLoadGeo__HEU_LoadData;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AssetSync;
}
namespace HoudiniEngineUnity {
class __HEU_AssetSync__AssetSyncCallback;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetSync);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback);
// Type: ::AssetSyncCallback
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9791))
// CS Name: ::HEU_AssetSync::AssetSyncCallback*
class CORDL_TYPE __HEU_AssetSync__AssetSyncCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x21a5874 size 0x12c virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x21a59a0 size 0x14 virtual true final false
inline void Invoke(::HoudiniEngineUnity::HEU_AssetSync*  assetSync) ;

/// @brief Method BeginInvoke addr 0x21a59b4 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_AssetSync*  assetSync, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x21a59d4 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_AssetSync__AssetSyncCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_AssetSync__AssetSyncCallback(__HEU_AssetSync__AssetSyncCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_AssetSync__AssetSyncCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_AssetSync__AssetSyncCallback(__HEU_AssetSync__AssetSyncCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_AssetSync__AssetSyncCallback()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback, 0x80>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AssetSync
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9793))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9792))
// CS Name: ::HoudiniEngineUnity::HEU_AssetSync*
class CORDL_TYPE HEU_AssetSync : public ::HoudiniEngineUnity::HEU_BaseSync {
public:
// Declarations
using AssetSyncCallback = ::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::HoudiniEngineUnity::HEU_BaseSync)]{};

/// @brief Field _onAssetLoaded offset 0x80
 __declspec(property(get=__get__onAssetLoaded, put=__set__onAssetLoaded)) ::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback*  _onAssetLoaded;

/// @brief Field _assetPath offset 0x88
 __declspec(property(get=__get__assetPath, put=__set__assetPath)) ::StringW  _assetPath;

constexpr void __set__onAssetLoaded(::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback*  value) ;

constexpr ::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback* __get__onAssetLoaded() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback*> __get__onAssetLoaded() const;

constexpr void __set__assetPath(::StringW  value) ;

constexpr ::StringW& __get__assetPath() ;

constexpr ::StringW const& __get__assetPath() const;

/// @brief Method OnEnable addr 0x21a53f0 size 0x4 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDestroy addr 0x21a53f4 size 0xc virtual false final false
inline void OnDestroy() ;

/// @brief Method InitializeAsset addr 0x21a5400 size 0xf8 virtual false final false
inline void InitializeAsset(::HoudiniEngineUnity::HEU_SessionBase*  session, ::StringW  assetPath, ::StringW  nodeName, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  startPosition) ;

/// @brief Method CreateThreadedTask addr 0x21a54f8 size 0x68 virtual false final false
inline ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* CreateThreadedTask() ;

/// @brief Method SetLoadCallback addr 0x21a5564 size 0x38 virtual false final false
inline void SetLoadCallback(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*  callback) ;

/// @brief Method SetupLoadTask addr 0x21a559c size 0x60 virtual true final false
inline void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase*  session) ;

/// @brief Method OnLoadComplete addr 0x21a5610 size 0x34 virtual true final false
inline void OnLoadComplete(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*  loadData) ;

/// @brief Method Resync addr 0x21a56c8 size 0x38 virtual true final false
inline void Resync() ;

static inline ::HoudiniEngineUnity::HEU_AssetSync* New_ctor() ;

/// @brief Method .ctor addr 0x21a5700 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSync", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_AssetSync(HEU_AssetSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSync", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_AssetSync(HEU_AssetSync const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_AssetSync()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetSync, 0x90>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetSync);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetSync*, "HoudiniEngineUnity", "HEU_AssetSync");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback*, "HoudiniEngineUnity", "HEU_AssetSync/AssetSyncCallback");
