#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TreePrototype)
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine {
class TreePrototype;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TreePrototype);
// Type: UnityEngine::TreePrototype
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15467))
// CS Name: ::UnityEngine::TreePrototype*
class CORDL_TYPE TreePrototype : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Prefab offset 0x10
 __declspec(property(get=__get_m_Prefab, put=__set_m_Prefab)) ::UnityEngine::GameObject*  m_Prefab;

/// @brief Field m_BendFactor offset 0x18
 __declspec(property(get=__get_m_BendFactor, put=__set_m_BendFactor)) float_t  m_BendFactor;

/// @brief Field m_NavMeshLod offset 0x1c
 __declspec(property(get=__get_m_NavMeshLod, put=__set_m_NavMeshLod)) int32_t  m_NavMeshLod;

 __declspec(property(get=get_prefab, put=set_prefab)) ::UnityEngine::GameObject*  prefab;

 __declspec(property(get=get_bendFactor, put=set_bendFactor)) float_t  bendFactor;

 __declspec(property(get=get_navMeshLod)) int32_t  navMeshLod;

constexpr void __set_m_Prefab(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_m_Prefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_m_Prefab() const;

constexpr void __set_m_BendFactor(float_t  value) ;

constexpr float_t& __get_m_BendFactor() ;

constexpr float_t const& __get_m_BendFactor() const;

constexpr void __set_m_NavMeshLod(int32_t  value) ;

constexpr int32_t& __get_m_NavMeshLod() ;

constexpr int32_t const& __get_m_NavMeshLod() const;

/// @brief Method get_prefab addr 0x2d1c2ac size 0x8 virtual false final false
inline ::UnityEngine::GameObject* get_prefab() ;

/// @brief Method set_prefab addr 0x2d1c2b4 size 0x8 virtual false final false
inline void set_prefab(::UnityEngine::GameObject*  value) ;

/// @brief Method get_bendFactor addr 0x2d1c2bc size 0x8 virtual false final false
inline float_t get_bendFactor() ;

/// @brief Method set_bendFactor addr 0x2d1c2c4 size 0x8 virtual false final false
inline void set_bendFactor(float_t  value) ;

/// @brief Method get_navMeshLod addr 0x2d1c2cc size 0x8 virtual false final false
inline int32_t get_navMeshLod() ;

static inline ::UnityEngine::TreePrototype* New_ctor() ;

/// @brief Method .ctor addr 0x2d1c2d4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method Equals addr 0x2d1c2dc size 0x64 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2d1c418 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2d1c340 size 0xd8 virtual false final false
inline bool Equals(::UnityEngine::TreePrototype*  other) ;

// Ctor Parameters [CppParam { name: "", ty: "TreePrototype", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TreePrototype(TreePrototype && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TreePrototype", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TreePrototype(TreePrototype const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TreePrototype()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TreePrototype, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::TreePrototype);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TreePrototype*, "UnityEngine", "TreePrototype");
