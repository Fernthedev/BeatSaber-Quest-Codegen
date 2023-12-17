#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ConcreteIdBinderGeneric_1)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class BindStatement;
}
namespace System {
class Object;
}
namespace Zenject {
class BindInfo;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__OverrideConfig;
}
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class ConcreteIdBinderGeneric_1;
}
namespace Zenject {
template<>
class ConcreteIdBinderGeneric_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class ConcreteIdBinderGeneric_1<TContract>;
}
namespace Zenject {
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
class ConcreteIdBinderGeneric_1<TContract>;
}
namespace Zenject {
template<>
class ConcreteIdBinderGeneric_1<float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::ConcreteIdBinderGeneric_1);
// Type: Zenject::ConcreteIdBinderGeneric`1
// Type: Zenject::ConcreteIdBinderGeneric`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10673)), TypeDefinitionIndex(TypeDefinitionIndex(10671)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10671), inst: 1067 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10673), inst: 6140 })
// CS Name: ::Zenject::ConcreteIdBinderGeneric`1<TContract>*
class CORDL_TYPE ConcreteIdBinderGeneric_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>> : public ::Zenject::ConcreteBinderGeneric_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::ConcreteBinderGeneric_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>)]{};

static inline ::Zenject::ConcreteIdBinderGeneric_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ConcreteBinderGeneric_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>* WithId(::System::Object*  identifier) ;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConcreteIdBinderGeneric_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ConcreteIdBinderGeneric`1
namespace Zenject {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10673)), TypeDefinitionIndex(TypeDefinitionIndex(10671)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10671), inst: 1067 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10673), inst: 974 })
// CS Name: ::Zenject::ConcreteIdBinderGeneric`1<TContract>*
class CORDL_TYPE ConcreteIdBinderGeneric_1<TContract> : public ::Zenject::ConcreteBinderGeneric_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::ConcreteBinderGeneric_1<TContract>)]{};

static inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ConcreteBinderGeneric_1<TContract>* WithId(::System::Object*  identifier) ;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConcreteIdBinderGeneric_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ConcreteIdBinderGeneric`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10671)), TypeDefinitionIndex(TypeDefinitionIndex(10673)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10671), inst: 1067 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10673), inst: 391 })
// CS Name: ::Zenject::ConcreteIdBinderGeneric`1<TContract>*
class CORDL_TYPE ConcreteIdBinderGeneric_1<float_t> : public ::Zenject::ConcreteBinderGeneric_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::ConcreteBinderGeneric_1<float_t>)]{};

static inline ::Zenject::ConcreteIdBinderGeneric_1<float_t>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ConcreteBinderGeneric_1<float_t>* WithId(::System::Object*  identifier) ;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConcreteIdBinderGeneric_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ConcreteIdBinderGeneric`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10671), inst: 1067 }), TypeDefinitionIndex(TypeDefinitionIndex(10673)), TypeDefinitionIndex(TypeDefinitionIndex(10671))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10673), inst: 2 })
// CS Name: ::Zenject::ConcreteIdBinderGeneric`1<TContract>*
class CORDL_TYPE ConcreteIdBinderGeneric_1<TContract> : public ::Zenject::ConcreteBinderGeneric_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::ConcreteBinderGeneric_1<TContract>)]{};

static inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ConcreteBinderGeneric_1<TContract>* WithId(::System::Object*  identifier) ;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConcreteIdBinderGeneric_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ConcreteIdBinderGeneric_1, "Zenject", "ConcreteIdBinderGeneric`1");
