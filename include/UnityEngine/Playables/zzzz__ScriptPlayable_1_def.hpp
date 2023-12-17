#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptPlayable_1)
namespace UnityEngine::Playables {
class IPlayableBehaviour;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
template<typename T>
struct ScriptPlayable_1;
}
namespace UnityEngine::Playables {
template<::il2cpp_utils::il2cpp_reference_type T>
struct ScriptPlayable_1<T>;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Playables::ScriptPlayable_1);
// Type: UnityEngine.Playables::ScriptPlayable`1
// Type: UnityEngine.Playables::ScriptPlayable`1
namespace UnityEngine::Playables {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10423))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10423), inst: 2 })
// CS Name: ::UnityEngine.Playables::ScriptPlayable`1<T>
struct CORDL_TYPE ScriptPlayable_1<T> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle offset 0x0
 __declspec(property(get=__get_m_Handle, put=__set_m_Handle)) ::UnityEngine::Playables::PlayableHandle  m_Handle;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>*() ;

constexpr void __set_m_Handle(::UnityEngine::Playables::PlayableHandle  value) ;

constexpr ::UnityEngine::Playables::PlayableHandle& __get_m_Handle() ;

constexpr ::UnityEngine::Playables::PlayableHandle const& __get_m_Handle() const;

static inline void setStaticF_m_NullPlayable(::UnityEngine::Playables::ScriptPlayable_1<T>  value) ;

static inline ::UnityEngine::Playables::ScriptPlayable_1<T> getStaticF_m_NullPlayable() ;

/// @brief Method get_Null addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Playables::ScriptPlayable_1<T> get_Null() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Playables::ScriptPlayable_1<T> Create(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Playables::ScriptPlayable_1<T> Create(::UnityEngine::Playables::PlayableGraph  graph, T  _cordl_template, int32_t  inputCount) ;

/// @brief Method CreateHandle addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, T  _cordl_template, int32_t  inputCount) ;

/// @brief Method CreateScriptInstance addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* CreateScriptInstance() ;

/// @brief Method CloneScriptInstance addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* CloneScriptInstance(::UnityEngine::Playables::IPlayableBehaviour*  source) ;

/// @brief Method CloneScriptInstanceFromEngineObject addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* CloneScriptInstanceFromEngineObject(::UnityEngine::Object*  source) ;

/// @brief Method CloneScriptInstanceFromIClonable addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* CloneScriptInstanceFromIClonable(::System::ICloneable*  source) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

/// @brief Method GetHandle addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method GetBehaviour addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetBehaviour() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Playables::ScriptPlayable_1<T>  playable) ;

/// @brief Method op_Explicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Playables::ScriptPlayable_1<T> op_Explicit___UnityEngine__Playables__ScriptPlayable_1_T_(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::Playables::ScriptPlayable_1<T>  other) ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr ScriptPlayable_1(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ScriptPlayable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ScriptPlayable_1()  = default;


// Fields

// Static field m_NullPlayable


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Playables::ScriptPlayable_1, "UnityEngine.Playables", "ScriptPlayable`1");
