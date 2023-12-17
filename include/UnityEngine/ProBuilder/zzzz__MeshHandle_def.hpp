#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshHandle)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class MeshHandle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshHandle);
// Type: UnityEngine.ProBuilder::MeshHandle
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12140))
// CS Name: ::UnityEngine.ProBuilder::MeshHandle*
class CORDL_TYPE MeshHandle : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Transform offset 0x10
 __declspec(property(get=__get_m_Transform, put=__set_m_Transform)) ::UnityEngine::Transform*  m_Transform;

/// @brief Field m_Mesh offset 0x18
 __declspec(property(get=__get_m_Mesh, put=__set_m_Mesh)) ::UnityEngine::Mesh*  m_Mesh;

 __declspec(property(get=get_mesh)) ::UnityEngine::Mesh*  mesh;

constexpr void __set_m_Transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_m_Transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_m_Transform() const;

constexpr void __set_m_Mesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get_m_Mesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get_m_Mesh() const;

/// @brief Method get_mesh addr 0x2b4c104 size 0x8 virtual false final false
inline ::UnityEngine::Mesh* get_mesh() ;

static inline ::UnityEngine::ProBuilder::MeshHandle* New_ctor(::UnityEngine::Transform*  transform, ::UnityEngine::Mesh*  mesh) ;

/// @brief Method .ctor addr 0x2b4c10c size 0x2c virtual false final false
inline void _ctor(::UnityEngine::Transform*  transform, ::UnityEngine::Mesh*  mesh) ;

/// @brief Method DrawMeshNow addr 0x2b4c138 size 0x128 virtual false final false
inline void DrawMeshNow(int32_t  submeshIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "MeshHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshHandle(MeshHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshHandle(MeshHandle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MeshHandle()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshHandle, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshHandle*, "UnityEngine.ProBuilder", "MeshHandle");
