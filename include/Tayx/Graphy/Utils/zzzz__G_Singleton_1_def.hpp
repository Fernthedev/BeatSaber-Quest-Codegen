#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(G_Singleton_1)
namespace System {
class Object;
}
// Forward declare root types
namespace Tayx::Graphy::Utils {
template<typename T>
class G_Singleton_1;
}
namespace Tayx::Graphy::Utils {
template<::il2cpp_utils::il2cpp_reference_type T>
class G_Singleton_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Tayx::Graphy::Utils::G_Singleton_1);
// Type: Tayx.Graphy.Utils::G_Singleton`1
// Type: Tayx.Graphy.Utils::G_Singleton`1
namespace Tayx::Graphy::Utils {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15071)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15071), inst: 2 })
// CS Name: ::Tayx.Graphy.Utils::G_Singleton`1<T>*
class CORDL_TYPE G_Singleton_1<T> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::MonoBehaviour)]{};

static inline void setStaticF__instance(T  value) ;

static inline T getStaticF__instance() ;

static inline void setStaticF__lock(::System::Object*  value) ;

static inline ::System::Object* getStaticF__lock() ;

/// @brief Method get_Instance addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T get_Instance() ;

/// @brief Method Awake addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnDestroy() ;

static inline ::Tayx::Graphy::Utils::G_Singleton_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "G_Singleton_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
G_Singleton_1(G_Singleton_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "G_Singleton_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
G_Singleton_1(G_Singleton_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 G_Singleton_1()  = default;
public:


// Fields

// Static field _instance

// Static field _lock


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Utils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Tayx::Graphy::Utils::G_Singleton_1, "Tayx.Graphy.Utils", "G_Singleton`1");
