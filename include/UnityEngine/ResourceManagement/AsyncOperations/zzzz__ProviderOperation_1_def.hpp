#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProviderOperation_1)
namespace System {
class Exception;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class ICachable;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IGenericProviderOperation;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
class ProviderOperation_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<::il2cpp_utils::il2cpp_reference_type TObject>
class ProviderOperation_1<TObject>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1);
// Type: UnityEngine.ResourceManagement.AsyncOperations::ProviderOperation`1
// Type: UnityEngine.ResourceManagement.AsyncOperations::ProviderOperation`1
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 790 }), TypeDefinitionIndex(TypeDefinitionIndex(14040)), TypeDefinitionIndex(TypeDefinitionIndex(14032))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14040), inst: 2 })
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::ProviderOperation`1<TObject>*
class CORDL_TYPE ProviderOperation_1<TObject> : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x118};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x118 - sizeof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>)]{};

/// @brief Field k_OperationWaitingToCompletePercentComplete offset 0x0
static constexpr float_t  k_OperationWaitingToCompletePercentComplete{0.99};

/// @brief Field kInvalidHandleMsg offset 0x0
static constexpr ::ConstString  kInvalidHandleMsg{u"The ProvideHandle is invalid. After the handle has been completed, it can no longer be used"};

/// @brief Field m_ReleaseDependenciesOnFailure offset 0x88
 __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure)) bool  m_ReleaseDependenciesOnFailure;

/// @brief Field m_CompletionCallback offset 0x90
 __declspec(property(get=__get_m_CompletionCallback, put=__set_m_CompletionCallback)) ::System::Action_4<int32_t,::System::Object*,bool,::System::Exception*>*  m_CompletionCallback;

/// @brief Field m_GetDepCallback offset 0x98
 __declspec(property(get=__get_m_GetDepCallback, put=__set_m_GetDepCallback)) ::System::Action_2<int32_t,::System::Collections::Generic::IList_1<::System::Object*>*>*  m_GetDepCallback;

/// @brief Field m_GetProgressCallback offset 0xa0
 __declspec(property(get=__get_m_GetProgressCallback, put=__set_m_GetProgressCallback)) ::System::Func_1<float_t>*  m_GetProgressCallback;

/// @brief Field m_GetDownloadProgressCallback offset 0xa8
 __declspec(property(get=__get_m_GetDownloadProgressCallback, put=__set_m_GetDownloadProgressCallback)) ::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>*  m_GetDownloadProgressCallback;

/// @brief Field m_WaitForCompletionCallback offset 0xb0
 __declspec(property(get=__get_m_WaitForCompletionCallback, put=__set_m_WaitForCompletionCallback)) ::System::Func_1<bool>*  m_WaitForCompletionCallback;

/// @brief Field m_DownloadStatus offset 0xb8
 __declspec(property(get=__get_m_DownloadStatus, put=__set_m_DownloadStatus)) ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  m_DownloadStatus;

/// @brief Field m_Provider offset 0xd0
 __declspec(property(get=__get_m_Provider, put=__set_m_Provider)) ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*  m_Provider;

/// @brief Field m_DepOp offset 0xd8
 __declspec(property(get=__get_m_DepOp, put=__set_m_DepOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  m_DepOp;

/// @brief Field m_Location offset 0xf8
 __declspec(property(get=__get_m_Location, put=__set_m_Location)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  m_Location;

/// @brief Field m_ProvideHandleVersion offset 0x100
 __declspec(property(get=__get_m_ProvideHandleVersion, put=__set_m_ProvideHandleVersion)) int32_t  m_ProvideHandleVersion;

/// @brief Field m_NeedsRelease offset 0x104
 __declspec(property(get=__get_m_NeedsRelease, put=__set_m_NeedsRelease)) bool  m_NeedsRelease;

/// @brief Field <UnityEngine.ResourceManagement.AsyncOperations.ICachable.Key>k__BackingField offset 0x108
 __declspec(property(get=__get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField, put=__set__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField)) ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  _UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField;

/// @brief Field m_ResourceManager offset 0x110
 __declspec(property(get=__get_m_ResourceManager, put=__set_m_ResourceManager)) ::UnityEngine::ResourceManagement::ResourceManager*  m_ResourceManager;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key, put=UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key)) ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key;

 __declspec(property(get=get_ProvideHandleVersion)) int32_t  ProvideHandleVersion;

 __declspec(property(get=get_Location)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  Location;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_RequestedType)) ::System::Type*  RequestedType;

 __declspec(property(get=get_DependencyCount)) int32_t  DependencyCount;

 __declspec(property(get=get_Progress)) float_t  Progress;

/// @brief Convert operator to "::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation"
constexpr operator  ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*() noexcept;

/// @brief Convert operator to "::UnityEngine::ResourceManagement::AsyncOperations::ICachable"
constexpr operator  ::UnityEngine::ResourceManagement::AsyncOperations::ICachable*() noexcept;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool  value) ;

constexpr bool& __get_m_ReleaseDependenciesOnFailure() ;

constexpr bool const& __get_m_ReleaseDependenciesOnFailure() const;

constexpr void __set_m_CompletionCallback(::System::Action_4<int32_t,::System::Object*,bool,::System::Exception*>*  value) ;

constexpr ::System::Action_4<int32_t,::System::Object*,bool,::System::Exception*>* __get_m_CompletionCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_4<int32_t,::System::Object*,bool,::System::Exception*>*> __get_m_CompletionCallback() const;

constexpr void __set_m_GetDepCallback(::System::Action_2<int32_t,::System::Collections::Generic::IList_1<::System::Object*>*>*  value) ;

constexpr ::System::Action_2<int32_t,::System::Collections::Generic::IList_1<::System::Object*>*>* __get_m_GetDepCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t,::System::Collections::Generic::IList_1<::System::Object*>*>*> __get_m_GetDepCallback() const;

constexpr void __set_m_GetProgressCallback(::System::Func_1<float_t>*  value) ;

constexpr ::System::Func_1<float_t>* __get_m_GetProgressCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<float_t>*> __get_m_GetProgressCallback() const;

constexpr void __set_m_GetDownloadProgressCallback(::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>*  value) ;

constexpr ::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>* __get_m_GetDownloadProgressCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>*> __get_m_GetDownloadProgressCallback() const;

constexpr void __set_m_WaitForCompletionCallback(::System::Func_1<bool>*  value) ;

constexpr ::System::Func_1<bool>* __get_m_WaitForCompletionCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> __get_m_WaitForCompletionCallback() const;

constexpr void __set_m_DownloadStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& __get_m_DownloadStatus() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const& __get_m_DownloadStatus() const;

constexpr void __set_m_Provider(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* __get_m_Provider() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*> __get_m_Provider() const;

constexpr void __set_m_DepOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& __get_m_DepOp() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& __get_m_DepOp() const;

constexpr void __set_m_Location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* __get_m_Location() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> __get_m_Location() const;

constexpr void __set_m_ProvideHandleVersion(int32_t  value) ;

constexpr int32_t& __get_m_ProvideHandleVersion() ;

constexpr int32_t const& __get_m_ProvideHandleVersion() const;

constexpr void __set_m_NeedsRelease(bool  value) ;

constexpr bool& __get_m_NeedsRelease() ;

constexpr bool const& __get_m_NeedsRelease() const;

constexpr void __set__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  value) ;

constexpr ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* __get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*> __get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField() const;

constexpr void __set_m_ResourceManager(::UnityEngine::ResourceManagement::ResourceManager*  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceManager* __get_m_ResourceManager() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> __get_m_ResourceManager() const;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  value) ;

/// @brief Method get_ProvideHandleVersion addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_ProvideHandleVersion() ;

/// @brief Method get_Location addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location() ;

/// @brief Method SetDownloadProgressCallback addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetDownloadProgressCallback(::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>*  callback) ;

/// @brief Method SetWaitForCompletionCallback addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetWaitForCompletionCallback(::System::Func_1<bool>*  callback) ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool InvokeWaitForCompletion() ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

static inline ::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method ReleaseDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReleaseDependencies() ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetDependencies(::System::Collections::Generic::IList_1<::System::Object*>*  dstList) ;

/// @brief Method get_RequestedType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Type* get_RequestedType() ;

/// @brief Method get_DependencyCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_DependencyCount() ;

/// @brief Method GetDependency addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TDepObject>
inline TDepObject GetDependency(int32_t  index) ;

/// @brief Method SetProgressCallback addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetProgressCallback(::System::Func_1<float_t>*  callback) ;

/// @brief Method ProviderCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
inline void ProviderCompleted(T  result, bool  status, ::System::Exception*  e) ;

/// @brief Method get_Progress addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_Progress() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Execute() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Init(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*  provider, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  depOp) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Init(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*  provider, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  depOp, bool  releaseDependenciesOnFailure) ;

/// @brief Method WaitForCompletionHandler addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool WaitForCompletionHandler() ;

/// @brief Method Destroy addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Destroy() ;

// Ctor Parameters [CppParam { name: "", ty: "ProviderOperation_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProviderOperation_1(ProviderOperation_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProviderOperation_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProviderOperation_1(ProviderOperation_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ProviderOperation_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1, "UnityEngine.ResourceManagement.AsyncOperations", "ProviderOperation`1");
