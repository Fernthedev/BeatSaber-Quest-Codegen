#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Action_2)
namespace GlobalNamespace {
struct __OVRSpatialAnchor__UnboundAnchor;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
namespace GlobalNamespace {
struct LevelFilter;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
template<typename TResult,typename TCapture>
struct __OVRSpatialAnchor__InvertedCapture_2;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultInfo;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
struct CreateServerFormData;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<>
class Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor,bool>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T2>
class Action_2<::UnityEngine::Color,T2>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
class Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,T2>;
}
namespace System {
template<>
class Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
class Action_2<::UnityEngine::Rendering::ScriptableRenderContext,T2>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
class Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,T2>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,::BeatSaber::AvatarCore::OptionalAvatarData>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,::GlobalNamespace::LevelFilter>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,::GlobalNamespace::SongPackMask>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
class Action_2<T1,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,::UnityEngine::InputSystem::LowLevel::InputEventPtr>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,::UnityEngine::Pose>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,::UnityEngine::UIElements::Experimental::StyleValues>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,::UnityEngine::UIElements::StyleSheets::MatchResultInfo>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,::UnityEngine::Vector2>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
class Action_2<T1,T2>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
class Action_2<T1,T2>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
class Action_2<T1,T2>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
class Action_2<T1,T2>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
class Action_2<T1,bool>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,bool>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,char16_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,double_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,float_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,int16_t>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
class Action_2<T1,int32_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,int32_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,int64_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,int8_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,uint16_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,uint32_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,uint64_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_2<T1,uint8_t>;
}
namespace System {
template<>
class Action_2<bool,::GlobalNamespace::CreateServerFormData>;
}
namespace System {
template<>
class Action_2<bool,::GlobalNamespace::OVRAnchor>;
}
namespace System {
template<>
class Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
class Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
class Action_2<bool,T2>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
class Action_2<float_t,T2>;
}
namespace System {
template<>
class Action_2<float_t,float_t>;
}
namespace System {
template<>
class Action_2<int32_t,::UnityEngine::Color>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T2>
class Action_2<int32_t,T2>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
class Action_2<int32_t,T2>;
}
namespace System {
template<>
class Action_2<int32_t,float_t>;
}
namespace System {
template<>
class Action_2<int32_t,int32_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
class Action_2<uint64_t,T2>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T2>
class Action_2<uint64_t,T2>;
}
namespace System {
template<>
class Action_2<uint64_t,bool>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Action_2);
// Type: System::Action`2
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6461 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<uint64_t,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<uint64_t,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(uint64_t  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6460 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<::UnityEngine::Rendering::ScriptableRenderContext,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::Rendering::ScriptableRenderContext  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6459 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,uint64_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,uint64_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, uint64_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6458 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,uint16_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,uint16_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, uint16_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6457 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,::UnityEngine::UIElements::Experimental::StyleValues> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,::UnityEngine::UIElements::Experimental::StyleValues>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, ::UnityEngine::UIElements::Experimental::StyleValues  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6456 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,int8_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,int8_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, int8_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6455 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,::UnityEngine::Pose> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,::UnityEngine::Pose>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, ::UnityEngine::Pose  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6454 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,::BeatSaber::AvatarCore::OptionalAvatarData> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,::BeatSaber::AvatarCore::OptionalAvatarData>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, ::BeatSaber::AvatarCore::OptionalAvatarData  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6453 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,::UnityEngine::UIElements::StyleSheets::MatchResultInfo> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6452 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,::GlobalNamespace::LevelFilter> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,::GlobalNamespace::LevelFilter>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, ::GlobalNamespace::LevelFilter  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6451 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,int16_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,int16_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, int16_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6450 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,::UnityEngine::InputSystem::LowLevel::InputEventPtr> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,::UnityEngine::InputSystem::LowLevel::InputEventPtr>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6449 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,double_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,double_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, double_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6448 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,char16_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,char16_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, char16_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6447 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, bool  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6446 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<int32_t,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<int32_t,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(int32_t  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6445 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::InputSystem::LowLevel::InputEventPtr  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6444 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<::UnityEngine::Color,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<::UnityEngine::Color,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::Color  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6443 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1661 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<uint64_t,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<uint64_t,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(uint64_t  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1650 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<float_t,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<float_t,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(float_t  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1639 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,::UnityEngine::Vector2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,::UnityEngine::Vector2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, ::UnityEngine::Vector2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1638 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,uint32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,uint32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, uint32_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1635 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,::GlobalNamespace::SongPackMask> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,::GlobalNamespace::SongPackMask>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, ::GlobalNamespace::SongPackMask  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1634 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, float_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1631 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,int64_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,int64_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, int64_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1630 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1629 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, int32_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1625 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,uint8_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,uint8_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, uint8_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1624 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, bool  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1614 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1613 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1612 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, int32_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1610 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<int32_t,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<int32_t,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(int32_t  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1007 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1006 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<bool,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<bool,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(bool  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1005 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(bool  arg1, ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1004 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(bool  arg1, ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 626 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor  arg1, bool  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 616 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<uint64_t,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<uint64_t,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(uint64_t  arg1, bool  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 582 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<float_t,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<float_t,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(float_t  arg1, float_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 568 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::PhysicsScene  arg1, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 534 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<int32_t,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<int32_t,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(int32_t  arg1, float_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 533 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<int32_t,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<int32_t,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(int32_t  arg1, int32_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 532 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<int32_t,::UnityEngine::Color> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<int32_t,::UnityEngine::Color>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(int32_t  arg1, ::UnityEngine::Color  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 496 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<bool,::GlobalNamespace::OVRAnchor> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<bool,::GlobalNamespace::OVRAnchor>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(bool  arg1, ::GlobalNamespace::OVRAnchor  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 495 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<bool,::GlobalNamespace::CreateServerFormData> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<bool,::GlobalNamespace::CreateServerFormData>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(bool  arg1, ::GlobalNamespace::CreateServerFormData  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 81 })
// CS Name: ::System::Action`2<T1,T2>*
class CORDL_TYPE Action_2<T1,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_2<T1,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_2(Action_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_2(Action_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Action_2, "System", "Action`2");
