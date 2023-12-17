#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Action_3)
namespace UnityEngine::InputSystem::Users {
struct InputUser;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Profiling::Experimental {
struct DebugScreenCapture;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T2,::il2cpp_utils::il2cpp_reference_type T3>
class Action_3<::UnityEngine::InputSystem::Users::InputUser,T2,T3>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_3<T1,::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_3<T1,::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_3<T1,::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T3>
class Action_3<T1,::UnityEngine::Color,T3>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T3>
class Action_3<T1,::UnityEngine::Vector2,T3>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
class Action_3<T1,T2,::UnityEngine::Playables::Playable>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
class Action_3<T1,T2,T3>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::cordl_internals::is_or_is_backed_by<int32_t> T3>
class Action_3<T1,T2,T3>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::cordl_internals::is_or_is_backed_by<uint8_t> T3>
class Action_3<T1,T2,T3>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T2,::il2cpp_utils::il2cpp_reference_type T3>
class Action_3<T1,T2,T3>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
class Action_3<T1,T2,bool>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
class Action_3<T1,T2,float_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
class Action_3<T1,T2,int32_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_3<T1,bool,::UnityEngine::Profiling::Experimental::DebugScreenCapture>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T3>
class Action_3<T1,float_t,T3>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
class Action_3<T1,int32_t,T3>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_3<T1,int32_t,int32_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
class Action_3<float_t,T2,T3>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Action_3);
// Type: System::Action`3
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6472 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData  arg2, float_t  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6471 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData  arg2, float_t  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2325))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6470 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData  arg2, float_t  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2325))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6469 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,::UnityEngine::Vector2,T3> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,::UnityEngine::Vector2,T3>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, ::UnityEngine::Vector2  arg2, T3  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2325))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6468 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,float_t,T3> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,float_t,T3>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, float_t  arg2, T3  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6467 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,T2,::UnityEngine::Playables::Playable> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,T2,::UnityEngine::Playables::Playable>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, T2  arg2, ::UnityEngine::Playables::Playable  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::cordl_internals::is_or_is_backed_by<uint8_t> T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6466 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,T2,T3> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,T2,T3>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, T2  arg2, T3  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6465 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,T2,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,T2,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, T2  arg2, bool  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2325))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6464 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,::UnityEngine::Color,T3> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,::UnityEngine::Color,T3>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, ::UnityEngine::Color  arg2, T3  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6463 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,bool,::UnityEngine::Profiling::Experimental::DebugScreenCapture> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,bool,::UnityEngine::Profiling::Experimental::DebugScreenCapture>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, bool  arg2, ::UnityEngine::Profiling::Experimental::DebugScreenCapture  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T2,::il2cpp_utils::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2325))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6462 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<::UnityEngine::InputSystem::Users::InputUser,T2,T3> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,T2,T3>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::InputSystem::Users::InputUser  arg1, T2  arg2, T3  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2325))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6306 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<float_t,T2,T3> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<float_t,T2,T3>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(float_t  arg1, T2  arg2, T3  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2325))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6292 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,T2,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,T2,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, T2  arg2, float_t  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::cordl_internals::is_or_is_backed_by<int32_t> T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2325))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6290 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,T2,T3> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,T2,T3>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, T2  arg2, T3  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6285 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,int32_t,T3> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,int32_t,T3>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, int32_t  arg2, T3  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T2,::il2cpp_utils::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6142 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,T2,T3> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,T2,T3>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, T2  arg2, T3  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 5330 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,T2,T3> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,T2,T3>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, T2  arg2, T3  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 5329 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,T2,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,T2,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, T2  arg2, int32_t  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2325))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 5328 })
// CS Name: ::System::Action`3<T1,T2,T3>*
class CORDL_TYPE Action_3<T1,int32_t,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_3<T1,int32_t,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, int32_t  arg2, int32_t  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_3(Action_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_3(Action_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Action_3, "System", "Action`3");
