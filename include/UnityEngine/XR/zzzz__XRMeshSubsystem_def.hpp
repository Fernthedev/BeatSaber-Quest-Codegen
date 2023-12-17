#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__IntegratedSubsystem_1_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRMeshSubsystem)
namespace UnityEngine::XR {
struct __XRMeshSubsystem__MeshTransformList;
}
namespace UnityEngine::XR {
struct MeshGenerationResult;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::XR {
class XRMeshSubsystem;
}
namespace UnityEngine::XR {
struct __XRMeshSubsystem__MeshTransformList;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::XRMeshSubsystem);
MARK_VAL_T(::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList);
// Type: ::MeshTransformList
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15638))
// CS Name: ::XRMeshSubsystem::MeshTransformList
struct CORDL_TYPE __XRMeshSubsystem__MeshTransformList : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Self offset 0x0
 __declspec(property(get=__get_m_Self, put=__set_m_Self)) ::cordl_internals::intptr_t  m_Self;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Self(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Self() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Self() const;

/// @brief Method Dispose addr 0x2eb3e34 size 0x3c virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x2eb3e70 size 0x3c virtual false final false
static inline void Dispose(::cordl_internals::intptr_t  self) ;

// Ctor Parameters [CppParam { name: "m_Self", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr __XRMeshSubsystem__MeshTransformList(::cordl_internals::intptr_t  m_Self) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __XRMeshSubsystem__MeshTransformList(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __XRMeshSubsystem__MeshTransformList()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::XR
// Type: UnityEngine.XR::XRMeshSubsystem
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15965), inst: 3918 }), TypeDefinitionIndex(TypeDefinitionIndex(15965))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15639))
// CS Name: ::UnityEngine.XR::XRMeshSubsystem*
class CORDL_TYPE XRMeshSubsystem : public ::UnityEngine::IntegratedSubsystem_1<Il2CppObject*> {
public:
// Declarations
using MeshTransformList = ::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::IntegratedSubsystem_1<Il2CppObject*>)]{};

/// @brief Method InvokeMeshReadyDelegate addr 0x2eb3d94 size 0x58 virtual false final false
inline void InvokeMeshReadyDelegate(::UnityEngine::XR::MeshGenerationResult  result, ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*  onMeshGenerationComplete) ;

static inline ::UnityEngine::XR::XRMeshSubsystem* New_ctor() ;

/// @brief Method .ctor addr 0x2eb3dec size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "XRMeshSubsystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XRMeshSubsystem(XRMeshSubsystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRMeshSubsystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRMeshSubsystem(XRMeshSubsystem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XRMeshSubsystem()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRMeshSubsystem, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::XR
NEED_NO_BOX(::UnityEngine::XR::XRMeshSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRMeshSubsystem*, "UnityEngine.XR", "XRMeshSubsystem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList, "UnityEngine.XR", "XRMeshSubsystem/MeshTransformList");
