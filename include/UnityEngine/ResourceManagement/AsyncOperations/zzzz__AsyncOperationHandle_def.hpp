#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOperationHandle)
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IAsyncOperation;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationStatus;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class Exception;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle);
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14034))
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationHandle
struct CORDL_TYPE AsyncOperationHandle : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_InternalOp offset 0x0
 __declspec(property(get=__get_m_InternalOp, put=__set_m_InternalOp)) ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  m_InternalOp;

/// @brief Field m_Version offset 0x8
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) int32_t  m_Version;

/// @brief Field m_LocationName offset 0x10
 __declspec(property(get=__get_m_LocationName, put=__set_m_LocationName)) ::StringW  m_LocationName;

 __declspec(property(get=get_LocationName, put=set_LocationName)) ::StringW  LocationName;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_InternalOp)) ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  InternalOp;

 __declspec(property(get=get_IsDone)) bool  IsDone;

 __declspec(property(get=get_OperationException)) ::System::Exception*  OperationException;

 __declspec(property(get=get_PercentComplete)) float_t  PercentComplete;

 __declspec(property(get=get_ReferenceCount)) int32_t  ReferenceCount;

 __declspec(property(get=get_Result)) ::System::Object*  Result;

 __declspec(property(get=get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  Status;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::System::Object*>*  Task;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set_m_InternalOp(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* __get_m_InternalOp() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*> __get_m_InternalOp() const;

constexpr void __set_m_Version(int32_t  value) ;

constexpr int32_t& __get_m_Version() ;

constexpr int32_t const& __get_m_Version() const;

constexpr void __set_m_LocationName(::StringW  value) ;

constexpr ::StringW& __get_m_LocationName() ;

constexpr ::StringW const& __get_m_LocationName() const;

/// @brief Method get_LocationName addr 0x2bdc860 size 0x8 virtual false final false
inline ::StringW get_LocationName() ;

/// @brief Method set_LocationName addr 0x2bdc868 size 0x8 virtual false final false
inline void set_LocationName(::StringW  value) ;

/// @brief Method .ctor addr 0x2bdc870 size 0xc4 virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op) ;

/// @brief Method .ctor addr 0x2bdc934 size 0x10 virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, int32_t  version) ;

/// @brief Method .ctor addr 0x2bcbcf8 size 0xd0 virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, ::StringW  locationName) ;

/// @brief Method .ctor addr 0x2bdc944 size 0x10 virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, int32_t  version, ::StringW  locationName) ;

/// @brief Method Acquire addr 0x2bccd28 size 0xc4 virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle Acquire() ;

/// @brief Method add_Completed addr 0x2bcd27c size 0xb4 virtual false final false
inline void add_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_Completed addr 0x2bdca54 size 0xb4 virtual false final false
inline void remove_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> Convert() ;

/// @brief Method Equals addr 0x2bdcb08 size 0x2c virtual false final false
inline bool Equals(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  other) ;

/// @brief Method get_DebugName addr 0x2bdcb34 size 0xdc virtual false final false
inline ::StringW get_DebugName() ;

/// @brief Method add_Destroyed addr 0x2bdccc8 size 0xb4 virtual false final false
inline void add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_Destroyed addr 0x2bdcd7c size 0xb4 virtual false final false
inline void remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method GetDependencies addr 0x2bdce30 size 0xb4 virtual false final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method GetHashCode addr 0x2bdcee4 size 0x30 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method get_InternalOp addr 0x2bdc954 size 0x100 virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* get_InternalOp() ;

/// @brief Method get_IsDone addr 0x2bdcf14 size 0xc8 virtual false final false
inline bool get_IsDone() ;

/// @brief Method IsValid addr 0x2bdcc10 size 0xb8 virtual false final false
inline bool IsValid() ;

/// @brief Method get_OperationException addr 0x2bdcfdc size 0xac virtual false final false
inline ::System::Exception* get_OperationException() ;

/// @brief Method get_PercentComplete addr 0x2bdd088 size 0xac virtual false final false
inline float_t get_PercentComplete() ;

/// @brief Method GetDownloadStatus addr 0x2bdd134 size 0xa0 virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus() ;

/// @brief Method InternalGetDownloadStatus addr 0x2bdd1d4 size 0x174 virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus InternalGetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method get_ReferenceCount addr 0x2bdd348 size 0xac virtual false final false
inline int32_t get_ReferenceCount() ;

/// @brief Method Release addr 0x2bccc54 size 0xb4 virtual false final false
inline void Release() ;

/// @brief Method get_Result addr 0x2bd975c size 0xa8 virtual false final false
inline ::System::Object* get_Result() ;

/// @brief Method get_Status addr 0x2bdd3f4 size 0xac virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() ;

/// @brief Method get_Task addr 0x2bdd4a0 size 0xac virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Object*>* get_Task() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2bdd54c size 0x4 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x2bdd550 size 0x18 virtual true final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2bdd568 size 0x4 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method WaitForCompletion addr 0x2bdd56c size 0x14c virtual false final false
inline ::System::Object* WaitForCompletion() ;

// Ctor Parameters [CppParam { name: "m_InternalOp", ty: "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocationName", ty: "::StringW", modifiers: "", def_value: None }]
constexpr AsyncOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  m_InternalOp, int32_t  m_Version, ::StringW  m_LocationName) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncOperationHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncOperationHandle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle");
