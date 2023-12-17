#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointerId)
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerId;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerId);
// Type: UnityEngine.UIElements::PointerId
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7195))
// CS Name: ::UnityEngine.UIElements::PointerId*
class CORDL_TYPE PointerId : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_maxPointers(int32_t  value) ;

static inline int32_t getStaticF_maxPointers() ;

static inline void setStaticF_invalidPointerId(int32_t  value) ;

static inline int32_t getStaticF_invalidPointerId() ;

static inline void setStaticF_mousePointerId(int32_t  value) ;

static inline int32_t getStaticF_mousePointerId() ;

static inline void setStaticF_touchPointerIdBase(int32_t  value) ;

static inline int32_t getStaticF_touchPointerIdBase() ;

static inline void setStaticF_touchPointerCount(int32_t  value) ;

static inline int32_t getStaticF_touchPointerCount() ;

static inline void setStaticF_penPointerIdBase(int32_t  value) ;

static inline int32_t getStaticF_penPointerIdBase() ;

static inline void setStaticF_penPointerCount(int32_t  value) ;

static inline int32_t getStaticF_penPointerCount() ;

static inline void setStaticF_hoveringPointers(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_hoveringPointers() ;

// Ctor Parameters [CppParam { name: "", ty: "PointerId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerId(PointerId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerId(PointerId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PointerId()  = default;
public:


// Fields

// Static field maxPointers

// Static field invalidPointerId

// Static field mousePointerId

// Static field touchPointerIdBase

// Static field touchPointerCount

// Static field penPointerIdBase

// Static field penPointerCount

// Static field hoveringPointers


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerId, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerId);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerId*, "UnityEngine.UIElements", "PointerId");
