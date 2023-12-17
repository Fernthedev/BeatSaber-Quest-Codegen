#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZenAutoInjecter)
namespace Zenject {
struct __ZenAutoInjecter__ContainerSources;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
struct __ZenAutoInjecter__ContainerSources;
}
namespace Zenject {
class ZenAutoInjecter;
}
// Write type traits
MARK_VAL_T(::Zenject::__ZenAutoInjecter__ContainerSources);
MARK_REF_PTR_T(::Zenject::ZenAutoInjecter);
// Type: ::ContainerSources
namespace Zenject {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11359))
// CS Name: ::ZenAutoInjecter::ContainerSources
struct CORDL_TYPE __ZenAutoInjecter__ContainerSources : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ZenAutoInjecter__ContainerSources_Unwrapped
enum struct ____ZenAutoInjecter__ContainerSources_Unwrapped : int32_t {
__E_SceneContext = static_cast<int32_t>(0x0),
__E_ProjectContext = static_cast<int32_t>(0x1),
__E_SearchHierarchy = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field SceneContext value: static_cast<int32_t>(0x0)
static ::Zenject::__ZenAutoInjecter__ContainerSources const SceneContext;

/// @brief Field ProjectContext value: static_cast<int32_t>(0x1)
static ::Zenject::__ZenAutoInjecter__ContainerSources const ProjectContext;

/// @brief Field SearchHierarchy value: static_cast<int32_t>(0x2)
static ::Zenject::__ZenAutoInjecter__ContainerSources const SearchHierarchy;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ZenAutoInjecter__ContainerSources_Unwrapped () const noexcept {
return std::bit_cast<____ZenAutoInjecter__ContainerSources_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ZenAutoInjecter__ContainerSources(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ZenAutoInjecter__ContainerSources(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ZenAutoInjecter__ContainerSources()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ZenAutoInjecter__ContainerSources, 0x4>, "Size mismatch!");

} // namespace end def Zenject
// Type: Zenject::ZenAutoInjecter
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11360))
// CS Name: ::Zenject::ZenAutoInjecter*
class CORDL_TYPE ZenAutoInjecter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ContainerSources = ::Zenject::__ZenAutoInjecter__ContainerSources;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _containerSource offset 0x18
 __declspec(property(get=__get__containerSource, put=__set__containerSource)) ::Zenject::__ZenAutoInjecter__ContainerSources  _containerSource;

/// @brief Field _hasInjected offset 0x1c
 __declspec(property(get=__get__hasInjected, put=__set__hasInjected)) bool  _hasInjected;

 __declspec(property(get=get_ContainerSource, put=set_ContainerSource)) ::Zenject::__ZenAutoInjecter__ContainerSources  ContainerSource;

constexpr void __set__containerSource(::Zenject::__ZenAutoInjecter__ContainerSources  value) ;

constexpr ::Zenject::__ZenAutoInjecter__ContainerSources& __get__containerSource() ;

constexpr ::Zenject::__ZenAutoInjecter__ContainerSources const& __get__containerSource() const;

constexpr void __set__hasInjected(bool  value) ;

constexpr bool& __get__hasInjected() ;

constexpr bool const& __get__hasInjected() const;

/// @brief Method get_ContainerSource addr 0x2f1fc6c size 0x8 virtual false final false
inline ::Zenject::__ZenAutoInjecter__ContainerSources get_ContainerSource() ;

/// @brief Method set_ContainerSource addr 0x2f1fc74 size 0x8 virtual false final false
inline void set_ContainerSource(::Zenject::__ZenAutoInjecter__ContainerSources  value) ;

/// @brief Method Construct addr 0x2f1fc7c size 0x44 virtual false final false
inline void Construct() ;

/// @brief Method Awake addr 0x2f1fcc0 size 0x48 virtual false final false
inline void Awake() ;

/// @brief Method LookupContainer addr 0x2f1fd08 size 0x158 virtual false final false
inline ::Zenject::DiContainer* LookupContainer() ;

/// @brief Method GetContainerForCurrentScene addr 0x2f1fe60 size 0x90 virtual false final false
inline ::Zenject::DiContainer* GetContainerForCurrentScene() ;

static inline ::Zenject::ZenAutoInjecter* New_ctor() ;

/// @brief Method .ctor addr 0x2f1fef0 size 0x10 virtual false final false
inline void _ctor() ;

/// @brief Method __zenInjectMethod0 addr 0x2f1ff00 size 0x80 virtual false final false
static inline void __zenInjectMethod0(::System::Object*  P_0, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f1ff80 size 0x254 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "ZenAutoInjecter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZenAutoInjecter(ZenAutoInjecter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZenAutoInjecter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZenAutoInjecter(ZenAutoInjecter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ZenAutoInjecter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenAutoInjecter, 0x20>, "Size mismatch!");

} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ZenAutoInjecter__ContainerSources, "Zenject", "ZenAutoInjecter/ContainerSources");
NEED_NO_BOX(::Zenject::ZenAutoInjecter);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenAutoInjecter*, "Zenject", "ZenAutoInjecter");
