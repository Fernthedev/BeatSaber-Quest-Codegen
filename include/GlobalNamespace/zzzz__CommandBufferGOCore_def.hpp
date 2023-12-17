#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CommandBufferGOCore)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace GlobalNamespace {
class CommandBufferOwners;
}
namespace UnityEngine {
class Camera;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
class CommandBufferGOCore;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CommandBufferGOCore);
// Type: ::CommandBufferGOCore
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15278))
// CS Name: ::CommandBufferGOCore*
class CORDL_TYPE CommandBufferGOCore : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _cameras offset 0x18
 __declspec(property(get=__get__cameras, put=__set__cameras)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>*  _cameras;

/// @brief Field _mesh offset 0x20
 __declspec(property(get=__get__mesh, put=__set__mesh)) ::UnityEngine::Mesh*  _mesh;

constexpr void __set__cameras(::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>* __get__cameras() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>*> __get__cameras() const;

static inline void setStaticF__material(::UnityEngine::Material*  value) ;

static inline ::UnityEngine::Material* getStaticF__material() ;

constexpr void __set__mesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get__mesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get__mesh() const;

/// @brief Method OnEnable addr 0x280691c size 0x414 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2806d30 size 0x404 virtual false final false
inline void OnDisable() ;

/// @brief Method OnWillRenderObject addr 0x28071dc size 0x1b4 virtual true final false
inline void OnWillRenderObject() ;

/// @brief Method CommandBufferCameraEvent addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent() ;

/// @brief Method CreateCommandBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Rendering::CommandBuffer* CreateCommandBuffer(::UnityEngine::Camera*  camera) ;

/// @brief Method CamerasDict addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>* CamerasDict() ;

static inline ::GlobalNamespace::CommandBufferGOCore* New_ctor() ;

/// @brief Method .ctor addr 0x2806558 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CommandBufferGOCore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommandBufferGOCore(CommandBufferGOCore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommandBufferGOCore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommandBufferGOCore(CommandBufferGOCore const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CommandBufferGOCore()  = default;
public:


// Fields

// Static field _material


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CommandBufferGOCore, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CommandBufferGOCore);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CommandBufferGOCore*, "", "CommandBufferGOCore");
