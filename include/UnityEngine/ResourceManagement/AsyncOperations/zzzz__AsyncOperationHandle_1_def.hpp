#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOperationHandle_1)
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationStatus;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
class AsyncOperationBase_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IAsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<>
struct AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<::il2cpp_utils::il2cpp_reference_type TObject>
struct AsyncOperationHandle_1<TObject>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<>
struct AsyncOperationHandle_1<bool>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<>
struct AsyncOperationHandle_1<int64_t>;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1);
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14033))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14033), inst: 797 })
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1<TObject>
struct CORDL_TYPE AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_InternalOp offset 0x0
 __declspec(property(get=__get_m_InternalOp, put=__set_m_InternalOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  m_InternalOp;

/// @brief Field m_Version offset 0x8
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) int32_t  m_Version;

/// @brief Field m_LocationName offset 0x10
 __declspec(property(get=__get_m_LocationName, put=__set_m_LocationName)) ::StringW  m_LocationName;

/// @brief Field m_UnloadSceneOpExcludeReleaseCallback offset 0x18
 __declspec(property(get=__get_m_UnloadSceneOpExcludeReleaseCallback, put=__set_m_UnloadSceneOpExcludeReleaseCallback)) bool  m_UnloadSceneOpExcludeReleaseCallback;

 __declspec(property(get=get_LocationName, put=set_LocationName)) ::StringW  LocationName;

 __declspec(property(get=get_UnloadSceneOpExcludeReleaseCallback, put=set_UnloadSceneOpExcludeReleaseCallback)) bool  UnloadSceneOpExcludeReleaseCallback;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_InternalOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  InternalOp;

 __declspec(property(get=get_IsDone)) bool  IsDone;

 __declspec(property(get=get_OperationException)) ::System::Exception*  OperationException;

 __declspec(property(get=get_PercentComplete)) float_t  PercentComplete;

 __declspec(property(get=get_ReferenceCount)) int32_t  ReferenceCount;

 __declspec(property(get=get_Result)) ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  Result;

 __declspec(property(get=get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  Status;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  Task;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*() ;

constexpr void __set_m_InternalOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* __get_m_InternalOp() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*> __get_m_InternalOp() const;

constexpr void __set_m_Version(int32_t  value) ;

constexpr int32_t& __get_m_Version() ;

constexpr int32_t const& __get_m_Version() const;

constexpr void __set_m_LocationName(::StringW  value) ;

constexpr ::StringW& __get_m_LocationName() ;

constexpr ::StringW const& __get_m_LocationName() const;

constexpr void __set_m_UnloadSceneOpExcludeReleaseCallback(bool  value) ;

constexpr bool& __get_m_UnloadSceneOpExcludeReleaseCallback() ;

constexpr bool const& __get_m_UnloadSceneOpExcludeReleaseCallback() const;

/// @brief Method get_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_LocationName() ;

/// @brief Method set_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_LocationName(::StringW  value) ;

/// @brief Method get_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_UnloadSceneOpExcludeReleaseCallback() ;

/// @brief Method set_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_UnloadSceneOpExcludeReleaseCallback(bool  value) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op_Implicit___UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  obj) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  op) ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus() ;

/// @brief Method InternalGetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus InternalGetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, int32_t  version) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, ::StringW  locationName) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, int32_t  version, ::StringW  locationName) ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> Acquire() ;

/// @brief Method add_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  value) ;

/// @brief Method remove_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  value) ;

/// @brief Method add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method add_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance WaitForCompletion() ;

/// @brief Method get_InternalOp addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* get_InternalOp() ;

/// @brief Method get_IsDone addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsDone() ;

/// @brief Method IsValid addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IsValid() ;

/// @brief Method get_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Exception* get_OperationException() ;

/// @brief Method get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_PercentComplete() ;

/// @brief Method get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_ReferenceCount() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance get_Result() ;

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* get_Task() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "m_InternalOp", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_UnloadSceneOpExcludeReleaseCallback", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncOperationHandle_1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  m_InternalOp, int32_t  m_Version, ::StringW  m_LocationName, bool  m_UnloadSceneOpExcludeReleaseCallback) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncOperationHandle_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncOperationHandle_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14033))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14033), inst: 333 })
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1<TObject>
struct CORDL_TYPE AsyncOperationHandle_1<int64_t> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_InternalOp offset 0x0
 __declspec(property(get=__get_m_InternalOp, put=__set_m_InternalOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>*  m_InternalOp;

/// @brief Field m_Version offset 0x8
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) int32_t  m_Version;

/// @brief Field m_LocationName offset 0x10
 __declspec(property(get=__get_m_LocationName, put=__set_m_LocationName)) ::StringW  m_LocationName;

/// @brief Field m_UnloadSceneOpExcludeReleaseCallback offset 0x18
 __declspec(property(get=__get_m_UnloadSceneOpExcludeReleaseCallback, put=__set_m_UnloadSceneOpExcludeReleaseCallback)) bool  m_UnloadSceneOpExcludeReleaseCallback;

 __declspec(property(get=get_LocationName, put=set_LocationName)) ::StringW  LocationName;

 __declspec(property(get=get_UnloadSceneOpExcludeReleaseCallback, put=set_UnloadSceneOpExcludeReleaseCallback)) bool  UnloadSceneOpExcludeReleaseCallback;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_InternalOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>*  InternalOp;

 __declspec(property(get=get_IsDone)) bool  IsDone;

 __declspec(property(get=get_OperationException)) ::System::Exception*  OperationException;

 __declspec(property(get=get_PercentComplete)) float_t  PercentComplete;

 __declspec(property(get=get_ReferenceCount)) int32_t  ReferenceCount;

 __declspec(property(get=get_Result)) int64_t  Result;

 __declspec(property(get=get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  Status;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<int64_t>*  Task;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*() ;

constexpr void __set_m_InternalOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>*  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>* __get_m_InternalOp() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>*> __get_m_InternalOp() const;

constexpr void __set_m_Version(int32_t  value) ;

constexpr int32_t& __get_m_Version() ;

constexpr int32_t const& __get_m_Version() const;

constexpr void __set_m_LocationName(::StringW  value) ;

constexpr ::StringW& __get_m_LocationName() ;

constexpr ::StringW const& __get_m_LocationName() const;

constexpr void __set_m_UnloadSceneOpExcludeReleaseCallback(bool  value) ;

constexpr bool& __get_m_UnloadSceneOpExcludeReleaseCallback() ;

constexpr bool const& __get_m_UnloadSceneOpExcludeReleaseCallback() const;

/// @brief Method get_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_LocationName() ;

/// @brief Method set_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_LocationName(::StringW  value) ;

/// @brief Method get_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_UnloadSceneOpExcludeReleaseCallback() ;

/// @brief Method set_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_UnloadSceneOpExcludeReleaseCallback(bool  value) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op_Implicit___UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>  obj) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>*  op) ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus() ;

/// @brief Method InternalGetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus InternalGetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, int32_t  version) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, ::StringW  locationName) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, int32_t  version, ::StringW  locationName) ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> Acquire() ;

/// @brief Method add_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*  value) ;

/// @brief Method remove_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*  value) ;

/// @brief Method add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method add_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t WaitForCompletion() ;

/// @brief Method get_InternalOp addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>* get_InternalOp() ;

/// @brief Method get_IsDone addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsDone() ;

/// @brief Method IsValid addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IsValid() ;

/// @brief Method get_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Exception* get_OperationException() ;

/// @brief Method get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_PercentComplete() ;

/// @brief Method get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_ReferenceCount() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t get_Result() ;

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<int64_t>* get_Task() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "m_InternalOp", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>*", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_UnloadSceneOpExcludeReleaseCallback", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncOperationHandle_1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>*  m_InternalOp, int32_t  m_Version, ::StringW  m_LocationName, bool  m_UnloadSceneOpExcludeReleaseCallback) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncOperationHandle_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncOperationHandle_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14033))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14033), inst: 105 })
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1<TObject>
struct CORDL_TYPE AsyncOperationHandle_1<bool> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_InternalOp offset 0x0
 __declspec(property(get=__get_m_InternalOp, put=__set_m_InternalOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>*  m_InternalOp;

/// @brief Field m_Version offset 0x8
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) int32_t  m_Version;

/// @brief Field m_LocationName offset 0x10
 __declspec(property(get=__get_m_LocationName, put=__set_m_LocationName)) ::StringW  m_LocationName;

/// @brief Field m_UnloadSceneOpExcludeReleaseCallback offset 0x18
 __declspec(property(get=__get_m_UnloadSceneOpExcludeReleaseCallback, put=__set_m_UnloadSceneOpExcludeReleaseCallback)) bool  m_UnloadSceneOpExcludeReleaseCallback;

 __declspec(property(get=get_LocationName, put=set_LocationName)) ::StringW  LocationName;

 __declspec(property(get=get_UnloadSceneOpExcludeReleaseCallback, put=set_UnloadSceneOpExcludeReleaseCallback)) bool  UnloadSceneOpExcludeReleaseCallback;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_InternalOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>*  InternalOp;

 __declspec(property(get=get_IsDone)) bool  IsDone;

 __declspec(property(get=get_OperationException)) ::System::Exception*  OperationException;

 __declspec(property(get=get_PercentComplete)) float_t  PercentComplete;

 __declspec(property(get=get_ReferenceCount)) int32_t  ReferenceCount;

 __declspec(property(get=get_Result)) bool  Result;

 __declspec(property(get=get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  Status;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<bool>*  Task;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*() ;

constexpr void __set_m_InternalOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>*  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>* __get_m_InternalOp() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>*> __get_m_InternalOp() const;

constexpr void __set_m_Version(int32_t  value) ;

constexpr int32_t& __get_m_Version() ;

constexpr int32_t const& __get_m_Version() const;

constexpr void __set_m_LocationName(::StringW  value) ;

constexpr ::StringW& __get_m_LocationName() ;

constexpr ::StringW const& __get_m_LocationName() const;

constexpr void __set_m_UnloadSceneOpExcludeReleaseCallback(bool  value) ;

constexpr bool& __get_m_UnloadSceneOpExcludeReleaseCallback() ;

constexpr bool const& __get_m_UnloadSceneOpExcludeReleaseCallback() const;

/// @brief Method get_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_LocationName() ;

/// @brief Method set_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_LocationName(::StringW  value) ;

/// @brief Method get_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_UnloadSceneOpExcludeReleaseCallback() ;

/// @brief Method set_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_UnloadSceneOpExcludeReleaseCallback(bool  value) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op_Implicit___UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>  obj) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>*  op) ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus() ;

/// @brief Method InternalGetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus InternalGetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, int32_t  version) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, ::StringW  locationName) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, int32_t  version, ::StringW  locationName) ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> Acquire() ;

/// @brief Method add_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*  value) ;

/// @brief Method remove_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*  value) ;

/// @brief Method add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method add_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool WaitForCompletion() ;

/// @brief Method get_InternalOp addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>* get_InternalOp() ;

/// @brief Method get_IsDone addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsDone() ;

/// @brief Method IsValid addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IsValid() ;

/// @brief Method get_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Exception* get_OperationException() ;

/// @brief Method get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_PercentComplete() ;

/// @brief Method get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_ReferenceCount() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_Result() ;

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<bool>* get_Task() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "m_InternalOp", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>*", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_UnloadSceneOpExcludeReleaseCallback", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncOperationHandle_1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>*  m_InternalOp, int32_t  m_Version, ::StringW  m_LocationName, bool  m_UnloadSceneOpExcludeReleaseCallback) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncOperationHandle_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncOperationHandle_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TObject>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14033))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14033), inst: 2 })
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle`1<TObject>
struct CORDL_TYPE AsyncOperationHandle_1<TObject> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_InternalOp offset 0x0
 __declspec(property(get=__get_m_InternalOp, put=__set_m_InternalOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*  m_InternalOp;

/// @brief Field m_Version offset 0x8
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) int32_t  m_Version;

/// @brief Field m_LocationName offset 0x10
 __declspec(property(get=__get_m_LocationName, put=__set_m_LocationName)) ::StringW  m_LocationName;

/// @brief Field m_UnloadSceneOpExcludeReleaseCallback offset 0x18
 __declspec(property(get=__get_m_UnloadSceneOpExcludeReleaseCallback, put=__set_m_UnloadSceneOpExcludeReleaseCallback)) bool  m_UnloadSceneOpExcludeReleaseCallback;

 __declspec(property(get=get_LocationName, put=set_LocationName)) ::StringW  LocationName;

 __declspec(property(get=get_UnloadSceneOpExcludeReleaseCallback, put=set_UnloadSceneOpExcludeReleaseCallback)) bool  UnloadSceneOpExcludeReleaseCallback;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_InternalOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*  InternalOp;

 __declspec(property(get=get_IsDone)) bool  IsDone;

 __declspec(property(get=get_OperationException)) ::System::Exception*  OperationException;

 __declspec(property(get=get_PercentComplete)) float_t  PercentComplete;

 __declspec(property(get=get_ReferenceCount)) int32_t  ReferenceCount;

 __declspec(property(get=get_Result)) TObject  Result;

 __declspec(property(get=get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  Status;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<TObject>*  Task;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*() ;

constexpr void __set_m_InternalOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* __get_m_InternalOp() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*> __get_m_InternalOp() const;

constexpr void __set_m_Version(int32_t  value) ;

constexpr int32_t& __get_m_Version() ;

constexpr int32_t const& __get_m_Version() const;

constexpr void __set_m_LocationName(::StringW  value) ;

constexpr ::StringW& __get_m_LocationName() ;

constexpr ::StringW const& __get_m_LocationName() const;

constexpr void __set_m_UnloadSceneOpExcludeReleaseCallback(bool  value) ;

constexpr bool& __get_m_UnloadSceneOpExcludeReleaseCallback() ;

constexpr bool const& __get_m_UnloadSceneOpExcludeReleaseCallback() const;

/// @brief Method get_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_LocationName() ;

/// @brief Method set_LocationName addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_LocationName(::StringW  value) ;

/// @brief Method get_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_UnloadSceneOpExcludeReleaseCallback() ;

/// @brief Method set_UnloadSceneOpExcludeReleaseCallback addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_UnloadSceneOpExcludeReleaseCallback(bool  value) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op_Implicit___UnityEngine__ResourceManagement__AsyncOperations__AsyncOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  obj) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*  op) ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus() ;

/// @brief Method InternalGetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus InternalGetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, int32_t  version) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, ::StringW  locationName) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, int32_t  version, ::StringW  locationName) ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> Acquire() ;

/// @brief Method add_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  value) ;

/// @brief Method remove_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  value) ;

/// @brief Method add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method add_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual false final false
inline TObject WaitForCompletion() ;

/// @brief Method get_InternalOp addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* get_InternalOp() ;

/// @brief Method get_IsDone addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsDone() ;

/// @brief Method IsValid addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IsValid() ;

/// @brief Method get_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Exception* get_OperationException() ;

/// @brief Method get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_PercentComplete() ;

/// @brief Method get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_ReferenceCount() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline TObject get_Result() ;

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TObject>* get_Task() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "m_InternalOp", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_UnloadSceneOpExcludeReleaseCallback", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncOperationHandle_1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*  m_InternalOp, int32_t  m_Version, ::StringW  m_LocationName, bool  m_UnloadSceneOpExcludeReleaseCallback) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncOperationHandle_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncOperationHandle_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1");
