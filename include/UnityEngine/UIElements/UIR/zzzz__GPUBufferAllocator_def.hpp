#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GPUBufferAllocator)
namespace UnityEngine::UIElements::UIR {
class BestFitAllocator;
}
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class GPUBufferAllocator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::GPUBufferAllocator);
// Type: UnityEngine.UIElements.UIR::GPUBufferAllocator
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7437))
// CS Name: ::UnityEngine.UIElements.UIR::GPUBufferAllocator*
class CORDL_TYPE GPUBufferAllocator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Low offset 0x10
 __declspec(property(get=__get_m_Low, put=__set_m_Low)) ::UnityEngine::UIElements::UIR::BestFitAllocator*  m_Low;

/// @brief Field m_High offset 0x18
 __declspec(property(get=__get_m_High, put=__set_m_High)) ::UnityEngine::UIElements::UIR::BestFitAllocator*  m_High;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

constexpr void __set_m_Low(::UnityEngine::UIElements::UIR::BestFitAllocator*  value) ;

constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator* __get_m_Low() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BestFitAllocator*> __get_m_Low() const;

constexpr void __set_m_High(::UnityEngine::UIElements::UIR::BestFitAllocator*  value) ;

constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator* __get_m_High() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BestFitAllocator*> __get_m_High() const;

static inline ::UnityEngine::UIElements::UIR::GPUBufferAllocator* New_ctor(uint32_t  maxSize) ;

/// @brief Method .ctor addr 0x2dd52a0 size 0x94 virtual false final false
inline void _ctor(uint32_t  maxSize) ;

/// @brief Method Allocate addr 0x2dd0cf0 size 0x13c virtual false final false
inline ::UnityEngine::UIElements::UIR::Alloc Allocate(uint32_t  size, bool  shortLived) ;

/// @brief Method Free addr 0x2dd0e2c size 0x84 virtual false final false
inline void Free(::UnityEngine::UIElements::UIR::Alloc  alloc) ;

/// @brief Method get_isEmpty addr 0x2dd536c size 0x3c virtual false final false
inline bool get_isEmpty() ;

/// @brief Method HighLowCollide addr 0x2dd5334 size 0x38 virtual false final false
inline bool HighLowCollide() ;

// Ctor Parameters [CppParam { name: "", ty: "GPUBufferAllocator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUBufferAllocator(GPUBufferAllocator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUBufferAllocator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUBufferAllocator(GPUBufferAllocator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GPUBufferAllocator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::GPUBufferAllocator, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::GPUBufferAllocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GPUBufferAllocator*, "UnityEngine.UIElements.UIR", "GPUBufferAllocator");
