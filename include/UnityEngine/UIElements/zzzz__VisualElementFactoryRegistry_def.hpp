#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VisualElementFactoryRegistry)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements {
class IUxmlFactory;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementFactoryRegistry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementFactoryRegistry);
// Type: UnityEngine.UIElements::VisualElementFactoryRegistry
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7002))
// CS Name: ::UnityEngine.UIElements::VisualElementFactoryRegistry*
class CORDL_TYPE VisualElementFactoryRegistry : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_Factories(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* getStaticF_s_Factories() ;

/// @brief Method get_factories addr 0x2e0ffa4 size 0xb0 virtual false final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* get_factories() ;

/// @brief Method RegisterFactory addr 0x2e10e50 size 0x470 virtual false final false
static inline void RegisterFactory(::UnityEngine::UIElements::IUxmlFactory*  factory) ;

/// @brief Method TryGetValue addr 0x2e112c0 size 0x60 virtual false final false
static inline bool TryGetValue(::StringW  fullTypeName, ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>  factoryList) ;

/// @brief Method RegisterEngineFactories addr 0x2e10054 size 0xb2c virtual false final false
static inline void RegisterEngineFactories() ;

/// @brief Method RegisterUserFactories addr 0x2e10b80 size 0x2d0 virtual false final false
static inline void RegisterUserFactories() ;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFactoryRegistry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualElementFactoryRegistry(VisualElementFactoryRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFactoryRegistry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualElementFactoryRegistry(VisualElementFactoryRegistry const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VisualElementFactoryRegistry()  = default;
public:


// Fields

// Static field s_Factories


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementFactoryRegistry, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementFactoryRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFactoryRegistry*, "UnityEngine.UIElements", "VisualElementFactoryRegistry");
