#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MemoryPoolExpandBinder_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryPoolMaxSizeBinder_1)
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class MemoryPoolBindInfo;
}
namespace Zenject {
template<typename TContract>
class MemoryPoolExpandBinder_1;
}
namespace Zenject {
class FactoryBindInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class MemoryPoolMaxSizeBinder_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class MemoryPoolMaxSizeBinder_1<TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MemoryPoolMaxSizeBinder_1);
// Type: Zenject::MemoryPoolMaxSizeBinder`1
// Type: Zenject::MemoryPoolMaxSizeBinder`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10866), inst: 4466 }), TypeDefinitionIndex(TypeDefinitionIndex(10866)), TypeDefinitionIndex(TypeDefinitionIndex(10867))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10867), inst: 2 })
// CS Name: ::Zenject::MemoryPoolMaxSizeBinder`1<TContract>*
class CORDL_TYPE MemoryPoolMaxSizeBinder_1<TContract> : public ::Zenject::MemoryPoolExpandBinder_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MemoryPoolExpandBinder_1<TContract>)]{};

static inline ::Zenject::MemoryPoolMaxSizeBinder_1<TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo, ::Zenject::MemoryPoolBindInfo*  poolBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo, ::Zenject::MemoryPoolBindInfo*  poolBindInfo) ;

/// @brief Method WithMaxSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::MemoryPoolExpandBinder_1<TContract>* WithMaxSize(int32_t  size) ;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolMaxSizeBinder_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryPoolMaxSizeBinder_1(MemoryPoolMaxSizeBinder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolMaxSizeBinder_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryPoolMaxSizeBinder_1(MemoryPoolMaxSizeBinder_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MemoryPoolMaxSizeBinder_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MemoryPoolMaxSizeBinder_1, "Zenject", "MemoryPoolMaxSizeBinder`1");
