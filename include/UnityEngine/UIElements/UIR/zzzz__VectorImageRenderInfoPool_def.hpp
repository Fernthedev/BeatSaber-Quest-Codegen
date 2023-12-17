#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageRenderInfo_def.hpp"
CORDL_MODULE_EXPORT(VectorImageRenderInfoPool)
namespace UnityEngine::UIElements::UIR {
class __VectorImageRenderInfoPool____c;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::UIElements::UIR {
class VectorImageRenderInfo;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class VectorImageRenderInfoPool;
}
namespace UnityEngine::UIElements::UIR {
class __VectorImageRenderInfoPool____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c);
// Type: ::<>c
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7417))
// CS Name: ::VectorImageRenderInfoPool::<>c*
class CORDL_TYPE __VectorImageRenderInfoPool____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c*  value) ;

static inline ::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c* getStaticF___9() ;

static inline void setStaticF___9__0_0(::System::Func_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>*  value) ;

static inline ::System::Func_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>* getStaticF___9__0_0() ;

static inline void setStaticF___9__0_1(::System::Action_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>*  value) ;

static inline ::System::Action_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>* getStaticF___9__0_1() ;

static inline ::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c* New_ctor() ;

/// @brief Method .ctor addr 0x2dccde0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.ctor>b__0_0 addr 0x2dccde8 size 0x58 virtual false final false
inline ::UnityEngine::UIElements::UIR::VectorImageRenderInfo* __ctor_b__0_0() ;

/// @brief Method <.ctor>b__0_1 addr 0x2dcce88 size 0x20 virtual false final false
inline void __ctor_b__0_1(::UnityEngine::UIElements::UIR::VectorImageRenderInfo*  vectorImageInfo) ;

// Ctor Parameters [CppParam { name: "", ty: "__VectorImageRenderInfoPool____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__VectorImageRenderInfoPool____c(__VectorImageRenderInfoPool____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__VectorImageRenderInfoPool____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__VectorImageRenderInfoPool____c(__VectorImageRenderInfoPool____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __VectorImageRenderInfoPool____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__0_0

// Static field <>9__0_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::VectorImageRenderInfoPool
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7400)), TypeDefinitionIndex(TypeDefinitionIndex(7419)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7400), inst: 413 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7418))
// CS Name: ::UnityEngine.UIElements.UIR::VectorImageRenderInfoPool*
class CORDL_TYPE VectorImageRenderInfoPool : public ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>)]{};

static inline ::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool* New_ctor() ;

/// @brief Method .ctor addr 0x2dccbf4 size 0x188 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VectorImageRenderInfoPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VectorImageRenderInfoPool(VectorImageRenderInfoPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VectorImageRenderInfoPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VectorImageRenderInfoPool(VectorImageRenderInfoPool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VectorImageRenderInfoPool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool*, "UnityEngine.UIElements.UIR", "VectorImageRenderInfoPool");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__VectorImageRenderInfoPool____c*, "UnityEngine.UIElements.UIR", "VectorImageRenderInfoPool/<>c");
