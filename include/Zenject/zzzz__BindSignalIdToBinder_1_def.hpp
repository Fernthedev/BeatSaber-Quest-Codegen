#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__BindSignalToBinder_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BindSignalIdToBinder_1)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class SignalBindingBindInfo;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template<typename TSignal>
class BindSignalToBinder_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template<typename TSignal>
class BindSignalIdToBinder_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TSignal>
class BindSignalIdToBinder_1<TSignal>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::BindSignalIdToBinder_1);
// Type: Zenject::BindSignalIdToBinder`1
// Type: Zenject::BindSignalIdToBinder`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10640)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10647), inst: 960 }), TypeDefinitionIndex(TypeDefinitionIndex(10647))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10640), inst: 2 })
// CS Name: ::Zenject::BindSignalIdToBinder`1<TSignal>*
class CORDL_TYPE BindSignalIdToBinder_1<TSignal> : public ::Zenject::BindSignalToBinder_1<TSignal> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::BindSignalToBinder_1<TSignal>)]{};

static inline ::Zenject::BindSignalIdToBinder_1<TSignal>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::SignalBindingBindInfo*  signalBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::SignalBindingBindInfo*  signalBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::BindSignalToBinder_1<TSignal>* WithId(::System::Object*  identifier) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "BindSignalIdToBinder_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BindSignalIdToBinder_1(BindSignalIdToBinder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BindSignalIdToBinder_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BindSignalIdToBinder_1(BindSignalIdToBinder_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BindSignalIdToBinder_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::BindSignalIdToBinder_1, "Zenject", "BindSignalIdToBinder`1");
