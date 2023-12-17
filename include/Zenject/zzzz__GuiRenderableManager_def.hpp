#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GuiRenderableManager)
namespace ModestTree::Util {
template<typename T1,typename T2>
class ValuePair_2;
}
namespace Zenject {
class __GuiRenderableManager____c;
}
namespace Zenject {
class IGuiRenderable;
}
namespace Zenject {
class __GuiRenderableManager____c__DisplayClass1_0;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class __GuiRenderableManager__RenderableInfo;
}
namespace System {
class Type;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
class GuiRenderableManager;
}
namespace Zenject {
class __GuiRenderableManager__RenderableInfo;
}
namespace Zenject {
class __GuiRenderableManager____c;
}
namespace Zenject {
class __GuiRenderableManager____c__DisplayClass1_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::GuiRenderableManager);
MARK_REF_PTR_T(::Zenject::__GuiRenderableManager__RenderableInfo);
MARK_REF_PTR_T(::Zenject::__GuiRenderableManager____c);
MARK_REF_PTR_T(::Zenject::__GuiRenderableManager____c__DisplayClass1_0);
// Type: ::RenderableInfo
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11312))
// CS Name: ::GuiRenderableManager::RenderableInfo*
class CORDL_TYPE __GuiRenderableManager__RenderableInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field Renderable offset 0x10
 __declspec(property(get=__get_Renderable, put=__set_Renderable)) ::Zenject::IGuiRenderable*  Renderable;

/// @brief Field Priority offset 0x18
 __declspec(property(get=__get_Priority, put=__set_Priority)) int32_t  Priority;

constexpr void __set_Renderable(::Zenject::IGuiRenderable*  value) ;

constexpr ::Zenject::IGuiRenderable* __get_Renderable() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::IGuiRenderable*> __get_Renderable() const;

constexpr void __set_Priority(int32_t  value) ;

constexpr int32_t& __get_Priority() ;

constexpr int32_t const& __get_Priority() const;

static inline ::Zenject::__GuiRenderableManager__RenderableInfo* New_ctor(::Zenject::IGuiRenderable*  renderable, int32_t  priority) ;

/// @brief Method .ctor addr 0x2f11ea0 size 0x30 virtual false final false
inline void _ctor(::Zenject::IGuiRenderable*  renderable, int32_t  priority) ;

/// @brief Method __zenCreate addr 0x2f1261c size 0x110 virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f1272c size 0x304 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__GuiRenderableManager__RenderableInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GuiRenderableManager__RenderableInfo(__GuiRenderableManager__RenderableInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GuiRenderableManager__RenderableInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GuiRenderableManager__RenderableInfo(__GuiRenderableManager__RenderableInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GuiRenderableManager__RenderableInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__GuiRenderableManager__RenderableInfo, 0x20>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c__DisplayClass1_0
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11313))
// CS Name: ::GuiRenderableManager::<>c__DisplayClass1_0*
class CORDL_TYPE __GuiRenderableManager____c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field renderable offset 0x10
 __declspec(property(get=__get_renderable, put=__set_renderable)) ::Zenject::IGuiRenderable*  renderable;

constexpr void __set_renderable(::Zenject::IGuiRenderable*  value) ;

constexpr ::Zenject::IGuiRenderable* __get_renderable() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::IGuiRenderable*> __get_renderable() const;

static inline ::Zenject::__GuiRenderableManager____c__DisplayClass1_0* New_ctor() ;

/// @brief Method .ctor addr 0x2f11e98 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.ctor>b__1 addr 0x2f12a30 size 0x80 virtual false final false
inline bool __ctor_b__1(::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*  x) ;

/// @brief Method __zenCreate addr 0x2f12ab0 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f12b0c size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__GuiRenderableManager____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GuiRenderableManager____c__DisplayClass1_0(__GuiRenderableManager____c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GuiRenderableManager____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GuiRenderableManager____c__DisplayClass1_0(__GuiRenderableManager____c__DisplayClass1_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GuiRenderableManager____c__DisplayClass1_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__GuiRenderableManager____c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11314))
// CS Name: ::GuiRenderableManager::<>c*
class CORDL_TYPE __GuiRenderableManager____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::Zenject::__GuiRenderableManager____c*  value) ;

static inline ::Zenject::__GuiRenderableManager____c* getStaticF___9() ;

static inline void setStaticF___9__1_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*,int32_t>*  value) ;

static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*,int32_t>* getStaticF___9__1_2() ;

static inline void setStaticF___9__1_0(::System::Func_2<::Zenject::__GuiRenderableManager__RenderableInfo*,int32_t>*  value) ;

static inline ::System::Func_2<::Zenject::__GuiRenderableManager__RenderableInfo*,int32_t>* getStaticF___9__1_0() ;

static inline ::Zenject::__GuiRenderableManager____c* New_ctor() ;

/// @brief Method .ctor addr 0x2f12d30 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.ctor>b__1_2 addr 0x2f12d38 size 0x18 virtual false final false
inline int32_t __ctor_b__1_2(::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*  x) ;

/// @brief Method <.ctor>b__1_0 addr 0x2f12d50 size 0x18 virtual false final false
inline int32_t __ctor_b__1_0(::Zenject::__GuiRenderableManager__RenderableInfo*  x) ;

/// @brief Method __zenCreate addr 0x2f12d68 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f12dc4 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__GuiRenderableManager____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GuiRenderableManager____c(__GuiRenderableManager____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GuiRenderableManager____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GuiRenderableManager____c(__GuiRenderableManager____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GuiRenderableManager____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__1_2

// Static field <>9__1_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__GuiRenderableManager____c, 0x10>, "Size mismatch!");

} // namespace end def Zenject
// Type: Zenject::GuiRenderableManager
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11315))
// CS Name: ::Zenject::GuiRenderableManager*
class CORDL_TYPE GuiRenderableManager : public ::System::Object {
public:
// Declarations
using __c = ::Zenject::__GuiRenderableManager____c;

using __c__DisplayClass1_0 = ::Zenject::__GuiRenderableManager____c__DisplayClass1_0;

using RenderableInfo = ::Zenject::__GuiRenderableManager__RenderableInfo;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _renderables offset 0x10
 __declspec(property(get=__get__renderables, put=__set__renderables)) ::System::Collections::Generic::List_1<::Zenject::__GuiRenderableManager__RenderableInfo*>*  _renderables;

constexpr void __set__renderables(::System::Collections::Generic::List_1<::Zenject::__GuiRenderableManager__RenderableInfo*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::__GuiRenderableManager__RenderableInfo*>* __get__renderables() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::__GuiRenderableManager__RenderableInfo*>*> __get__renderables() const;

static inline ::Zenject::GuiRenderableManager* New_ctor(::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>*  renderables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  priorities) ;

/// @brief Method .ctor addr 0x2f118f8 size 0x5a0 virtual false final false
inline void _ctor(::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>*  renderables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  priorities) ;

/// @brief Method OnGui addr 0x2f11ed0 size 0x32c virtual false final false
inline void OnGui() ;

/// @brief Method __zenCreate addr 0x2f121fc size 0x11c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f12318 size 0x304 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "GuiRenderableManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GuiRenderableManager(GuiRenderableManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GuiRenderableManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GuiRenderableManager(GuiRenderableManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GuiRenderableManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::GuiRenderableManager, 0x18>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::GuiRenderableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GuiRenderableManager*, "Zenject", "GuiRenderableManager");
NEED_NO_BOX(::Zenject::__GuiRenderableManager__RenderableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__GuiRenderableManager__RenderableInfo*, "Zenject", "GuiRenderableManager/RenderableInfo");
NEED_NO_BOX(::Zenject::__GuiRenderableManager____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__GuiRenderableManager____c*, "Zenject", "GuiRenderableManager/<>c");
NEED_NO_BOX(::Zenject::__GuiRenderableManager____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__GuiRenderableManager____c__DisplayClass1_0*, "Zenject", "GuiRenderableManager/<>c__DisplayClass1_0");
