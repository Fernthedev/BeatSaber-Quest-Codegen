#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__MonoKernel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProjectKernel)
namespace Zenject {
class SceneContextRegistry;
}
namespace System {
class Object;
}
namespace Zenject {
class __ProjectKernel____c__DisplayClass4_0;
}
namespace Zenject {
class ZenjectSettings;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class SceneContext;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace Zenject {
class ProjectKernel;
}
namespace Zenject {
class __ProjectKernel____c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ProjectKernel);
MARK_REF_PTR_T(::Zenject::__ProjectKernel____c__DisplayClass4_0);
// Type: ::<>c__DisplayClass4_0
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11324))
// CS Name: ::ProjectKernel::<>c__DisplayClass4_0*
class CORDL_TYPE __ProjectKernel____c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field sceneOrder offset 0x10
 __declspec(property(get=__get_sceneOrder, put=__set_sceneOrder)) ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*  sceneOrder;

/// @brief Field <>9__0 offset 0x18
 __declspec(property(get=__get___9__0, put=__set___9__0)) ::System::Func_2<::Zenject::SceneContext*,int32_t>*  __9__0;

constexpr void __set_sceneOrder(::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>* __get_sceneOrder() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*> __get_sceneOrder() const;

constexpr void __set___9__0(::System::Func_2<::Zenject::SceneContext*,int32_t>*  value) ;

constexpr ::System::Func_2<::Zenject::SceneContext*,int32_t>* __get___9__0() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::SceneContext*,int32_t>*> __get___9__0() const;

static inline ::Zenject::__ProjectKernel____c__DisplayClass4_0* New_ctor() ;

/// @brief Method .ctor addr 0x2f16414 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ForceUnloadAllScenes>b__0 addr 0x2f16a78 size 0x78 virtual false final false
inline int32_t _ForceUnloadAllScenes_b__0(::Zenject::SceneContext*  x) ;

/// @brief Method __zenCreate addr 0x2f16af0 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f16b4c size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ProjectKernel____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ProjectKernel____c__DisplayClass4_0(__ProjectKernel____c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ProjectKernel____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ProjectKernel____c__DisplayClass4_0(__ProjectKernel____c__DisplayClass4_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ProjectKernel____c__DisplayClass4_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ProjectKernel____c__DisplayClass4_0, 0x20>, "Size mismatch!");

} // namespace end def Zenject
// Type: Zenject::ProjectKernel
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11323))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11325))
// CS Name: ::Zenject::ProjectKernel*
class CORDL_TYPE ProjectKernel : public ::Zenject::MonoKernel {
public:
// Declarations
using __c__DisplayClass4_0 = ::Zenject::__ProjectKernel____c__DisplayClass4_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::Zenject::MonoKernel)]{};

/// @brief Field _settings offset 0x38
 __declspec(property(get=__get__settings, put=__set__settings)) ::Zenject::ZenjectSettings*  _settings;

/// @brief Field _contextRegistry offset 0x40
 __declspec(property(get=__get__contextRegistry, put=__set__contextRegistry)) ::Zenject::SceneContextRegistry*  _contextRegistry;

constexpr void __set__settings(::Zenject::ZenjectSettings*  value) ;

constexpr ::Zenject::ZenjectSettings* __get__settings() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenjectSettings*> __get__settings() const;

constexpr void __set__contextRegistry(::Zenject::SceneContextRegistry*  value) ;

constexpr ::Zenject::SceneContextRegistry* __get__contextRegistry() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::SceneContextRegistry*> __get__contextRegistry() const;

/// @brief Method OnApplicationQuit addr 0x2f15f6c size 0x28 virtual false final false
inline void OnApplicationQuit() ;

/// @brief Method DestroyEverythingInOrder addr 0x2f15f94 size 0x98 virtual false final false
inline void DestroyEverythingInOrder() ;

/// @brief Method ForceUnloadAllScenes addr 0x2f1602c size 0x3e8 virtual false final false
inline void ForceUnloadAllScenes(bool  immediate) ;

static inline ::Zenject::ProjectKernel* New_ctor() ;

/// @brief Method .ctor addr 0x2f1646c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method __zenFieldSetter0 addr 0x2f16474 size 0x134 virtual false final false
static inline void __zenFieldSetter0(::System::Object*  P_0, ::System::Object*  P_1) ;

/// @brief Method __zenFieldSetter1 addr 0x2f165a8 size 0x134 virtual false final false
static inline void __zenFieldSetter1(::System::Object*  P_0, ::System::Object*  P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f166dc size 0x39c virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "ProjectKernel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProjectKernel(ProjectKernel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProjectKernel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProjectKernel(ProjectKernel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ProjectKernel()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ProjectKernel, 0x48>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::ProjectKernel);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ProjectKernel*, "Zenject", "ProjectKernel");
NEED_NO_BOX(::Zenject::__ProjectKernel____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ProjectKernel____c__DisplayClass4_0*, "Zenject", "ProjectKernel/<>c__DisplayClass4_0");
