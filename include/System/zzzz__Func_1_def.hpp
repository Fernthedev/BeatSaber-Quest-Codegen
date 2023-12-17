#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Func_1)
namespace System {
class Object;
}
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
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
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__OverrideConfig;
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
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
// Forward declare root types
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<>
class Func_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace System {
template<>
class Func_1<::GlobalNamespace::AuthenticationToken>;
}
namespace System {
template<>
class Func_1<::GlobalNamespace::GetAssetBundleFileResult>;
}
namespace System {
template<>
class Func_1<::GlobalNamespace::MultiplayerAvatarData>;
}
namespace System {
template<>
class Func_1<::GlobalNamespace::MultiplayerAvatarsData>;
}
namespace System {
template<>
class Func_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>;
}
namespace System {
template<>
class Func_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>;
}
namespace System {
template<>
class Func_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>;
}
namespace System {
template<>
class Func_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>;
}
namespace System {
template<>
class Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>;
}
namespace System {
template<>
class Func_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>;
}
namespace System {
template<>
class Func_1<::System::Nullable_1<int32_t>>;
}
namespace System {
template<>
class Func_1<::System::Nullable_1<uint32_t>>;
}
namespace System {
template<>
class Func_1<::System::Threading::Tasks::VoidTaskResult>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
class Func_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
class Func_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
class Func_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
class Func_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
class Func_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>;
}
namespace System {
template<>
class Func_1<::UnityEngine::Color>;
}
namespace System {
template<>
class Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>;
}
namespace System {
template<>
class Func_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class Func_1<TResult>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
class Func_1<TResult>;
}
namespace System {
template<>
class Func_1<bool>;
}
namespace System {
template<>
class Func_1<float_t>;
}
namespace System {
template<>
class Func_1<int32_t>;
}
namespace System {
template<>
class Func_1<int64_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Func_1);
// Type: System::Func`1
// Type: System::Func`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 6145 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::ValueTuple_2<T1_cordlgen_0,int64_t> Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 6140 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig> Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 5069 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 5059 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 4231 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::GlobalNamespace::MultiplayerAvatarData> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::GlobalNamespace::MultiplayerAvatarData>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::MultiplayerAvatarData Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 2029 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 2022 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2> Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 1124 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2> Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 1123 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t> Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 974 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 906 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 905 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 904 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 900 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::System::Threading::Tasks::VoidTaskResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::System::Threading::Tasks::VoidTaskResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::VoidTaskResult Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 893 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::GlobalNamespace::MultiplayerAvatarsData> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::GlobalNamespace::MultiplayerAvatarsData>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::MultiplayerAvatarsData Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 882 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::GlobalNamespace::GetAssetBundleFileResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::GlobalNamespace::GetAssetBundleFileResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::GetAssetBundleFileResult Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 876 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::GlobalNamespace::AuthenticationToken> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::GlobalNamespace::AuthenticationToken>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::AuthenticationToken Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 868 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::System::Nullable_1<uint32_t>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::System::Nullable_1<uint32_t>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Nullable_1<uint32_t> Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 867 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::System::Nullable_1<int32_t>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::System::Nullable_1<int32_t>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Nullable_1<int32_t> Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 797 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 391 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 333 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<int64_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<int64_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline int64_t Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 293 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::UnityEngine::Color> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::UnityEngine::Color>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Color Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 105 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 102 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::System::ValueTuple_2<bool,T2_cordlgen_0>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::ValueTuple_2<bool,T2_cordlgen_0> Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 98 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 95 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 2 })
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1<TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_1<TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_1(Func_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_1(Func_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Func_1, "System", "Func`1");
