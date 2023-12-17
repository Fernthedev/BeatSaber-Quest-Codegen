#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Management/zzzz__XRLoader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XRLoaderHelper)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRLoaderHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Management::XRLoaderHelper);
// Type: UnityEngine.XR.Management::XRLoaderHelper
namespace UnityEngine::XR::Management {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16035))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16036))
// CS Name: ::UnityEngine.XR.Management::XRLoaderHelper*
class CORDL_TYPE XRLoaderHelper : public ::UnityEngine::XR::Management::XRLoader {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::XR::Management::XRLoader)]{};

/// @brief Field m_SubsystemInstanceMap offset 0x18
 __declspec(property(get=__get_m_SubsystemInstanceMap, put=__set_m_SubsystemInstanceMap)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::ISubsystem*>*  m_SubsystemInstanceMap;

constexpr void __set_m_SubsystemInstanceMap(::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::ISubsystem*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::ISubsystem*>* __get_m_SubsystemInstanceMap() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::ISubsystem*>*> __get_m_SubsystemInstanceMap() const;

/// @brief Method GetLoadedSubsystem addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
inline T GetLoadedSubsystem() ;

/// @brief Method StartSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void StartSubsystem() ;

/// @brief Method StopSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void StopSubsystem() ;

/// @brief Method DestroySubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void DestroySubsystem() ;

/// @brief Method CreateSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDescriptor,typename TSubsystem>
inline void CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>*  descriptors, ::StringW  id) ;

/// @brief Method CreateIntegratedSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDescriptor,typename TSubsystem>
inline void CreateIntegratedSubsystem(::System::Collections::Generic::List_1<TDescriptor>*  descriptors, ::StringW  id) ;

/// @brief Method CreateStandaloneSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDescriptor,typename TSubsystem>
inline void CreateStandaloneSubsystem(::System::Collections::Generic::List_1<TDescriptor>*  descriptors, ::StringW  id) ;

/// @brief Method Deinitialize addr 0x2c76514 size 0x58 virtual true final false
inline bool Deinitialize() ;

static inline ::UnityEngine::XR::Management::XRLoaderHelper* New_ctor() ;

/// @brief Method .ctor addr 0x2c7656c size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "XRLoaderHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XRLoaderHelper(XRLoaderHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRLoaderHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRLoaderHelper(XRLoaderHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XRLoaderHelper()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::XRLoaderHelper, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::XR::Management
NEED_NO_BOX(::UnityEngine::XR::Management::XRLoaderHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRLoaderHelper*, "UnityEngine.XR.Management", "XRLoaderHelper");
