#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuationTaskFromResultTask_1)
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Object;
}
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
}
namespace System {
class Delegate;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LoadBeatmapLevelResult;
}
namespace GlobalNamespace {
struct __BeatmapLevelSO__GetBeatmapLevelDataResult;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
// Forward declare root types
namespace System::Threading::Tasks {
template<typename TAntecedentResult>
class ContinuationTaskFromResultTask_1;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
class ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
class ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
class ContinuationTaskFromResultTask_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
class ContinuationTaskFromResultTask_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
class ContinuationTaskFromResultTask_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
class ContinuationTaskFromResultTask_1<TAntecedentResult>;
}
namespace System::Threading::Tasks {
template<::cordl_internals::is_or_is_backed_by<int32_t> TAntecedentResult>
class ContinuationTaskFromResultTask_1<TAntecedentResult>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<bool>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<int32_t>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<int64_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::ContinuationTaskFromResultTask_1);
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2799))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 6145 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* New_ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2799)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 5069 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2799))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 5059 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2799))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 4231 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>* New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2799)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 1124 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* New_ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2799)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 1123 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* New_ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TAntecedentResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2799)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 974 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<TAntecedentResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<TAntecedentResult>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TAntecedentResult>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>* New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2799))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 906 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2799))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 905 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2799)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 904 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2799))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 900 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>* New_ctor(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2799)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 893 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>* New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2799)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 882 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2799))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 876 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>* New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2799))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 868 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>* New_ctor(::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2799))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 867 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>* New_ctor(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2799))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 797 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2799)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 333 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<int64_t> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<int64_t>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<int64_t>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<int64_t>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int64_t>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>* New_ctor(::System::Threading::Tasks::Task_1<int64_t>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<int64_t>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2799))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 105 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<bool> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<bool>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<bool>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<bool>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>* New_ctor(::System::Threading::Tasks::Task_1<bool>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<bool>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2799)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 102 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::System::ValueTuple_2<bool,T2_cordlgen_0>> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* New_ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2799)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 98 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<int32_t> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<int32_t>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<int32_t>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<int32_t>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>* New_ctor(::System::Threading::Tasks::Task_1<int32_t>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<int32_t>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787)), TypeDefinitionIndex(TypeDefinitionIndex(2799))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 95 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* New_ctor(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2799)), TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2799), inst: 2 })
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1<TAntecedentResult> : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task_1<TAntecedentResult>*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TAntecedentResult>*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>* New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromResultTask_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::ContinuationTaskFromResultTask_1, "System.Threading.Tasks", "ContinuationTaskFromResultTask`1");
