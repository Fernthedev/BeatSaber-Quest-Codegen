#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputBindingResolver)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem {
struct __InputActionState__UnmanagedMemory;
}
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem {
class InputBindingComposite;
}
namespace UnityEngine::InputSystem {
class InputProcessor;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
namespace UnityEngine::InputSystem::Utilities {
struct NameAndParameters;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputBindingResolver;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputBindingResolver);
// Type: UnityEngine.InputSystem::InputBindingResolver
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6195))
// CS Name: ::UnityEngine.InputSystem::InputBindingResolver
struct CORDL_TYPE InputBindingResolver : public ::bs_hook::ValueTypeWrapper<0x128> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x128};

/// @brief Field totalProcessorCount offset 0x0
 __declspec(property(get=__get_totalProcessorCount, put=__set_totalProcessorCount)) int32_t  totalProcessorCount;

/// @brief Field totalCompositeCount offset 0x4
 __declspec(property(get=__get_totalCompositeCount, put=__set_totalCompositeCount)) int32_t  totalCompositeCount;

/// @brief Field totalInteractionCount offset 0x8
 __declspec(property(get=__get_totalInteractionCount, put=__set_totalInteractionCount)) int32_t  totalInteractionCount;

/// @brief Field maps offset 0x10
 __declspec(property(get=__get_maps, put=__set_maps)) ::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*>  maps;

/// @brief Field controls offset 0x18
 __declspec(property(get=__get_controls, put=__set_controls)) ::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>  controls;

/// @brief Field memory offset 0x20
 __declspec(property(get=__get_memory, put=__set_memory)) ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory  memory;

/// @brief Field interactions offset 0xa0
 __declspec(property(get=__get_interactions, put=__set_interactions)) ::ArrayW<::UnityEngine::InputSystem::IInputInteraction*,::Array<::UnityEngine::InputSystem::IInputInteraction*>*>  interactions;

/// @brief Field processors offset 0xa8
 __declspec(property(get=__get_processors, put=__set_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor*,::Array<::UnityEngine::InputSystem::InputProcessor*>*>  processors;

/// @brief Field composites offset 0xb0
 __declspec(property(get=__get_composites, put=__set_composites)) ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*,::Array<::UnityEngine::InputSystem::InputBindingComposite*>*>  composites;

/// @brief Field bindingMask offset 0xb8
 __declspec(property(get=__get_bindingMask, put=__set_bindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  bindingMask;

/// @brief Field m_IsControlOnlyResolve offset 0x118
 __declspec(property(get=__get_m_IsControlOnlyResolve, put=__set_m_IsControlOnlyResolve)) bool  m_IsControlOnlyResolve;

/// @brief Field m_Parameters offset 0x120
 __declspec(property(get=__get_m_Parameters, put=__set_m_Parameters)) ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*  m_Parameters;

 __declspec(property(get=get_totalMapCount)) int32_t  totalMapCount;

 __declspec(property(get=get_totalActionCount)) int32_t  totalActionCount;

 __declspec(property(get=get_totalBindingCount)) int32_t  totalBindingCount;

 __declspec(property(get=get_totalControlCount)) int32_t  totalControlCount;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_totalProcessorCount(int32_t  value) ;

constexpr int32_t& __get_totalProcessorCount() ;

constexpr int32_t const& __get_totalProcessorCount() const;

constexpr void __set_totalCompositeCount(int32_t  value) ;

constexpr int32_t& __get_totalCompositeCount() ;

constexpr int32_t const& __get_totalCompositeCount() const;

constexpr void __set_totalInteractionCount(int32_t  value) ;

constexpr int32_t& __get_totalInteractionCount() ;

constexpr int32_t const& __get_totalInteractionCount() const;

constexpr void __set_maps(::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*>& __get_maps() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*> const& __get_maps() const;

constexpr void __set_controls(::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>& __get_controls() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*> const& __get_controls() const;

constexpr void __set_memory(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory  value) ;

constexpr ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory& __get_memory() ;

constexpr ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory const& __get_memory() const;

constexpr void __set_interactions(::ArrayW<::UnityEngine::InputSystem::IInputInteraction*,::Array<::UnityEngine::InputSystem::IInputInteraction*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::IInputInteraction*,::Array<::UnityEngine::InputSystem::IInputInteraction*>*>& __get_interactions() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::IInputInteraction*,::Array<::UnityEngine::InputSystem::IInputInteraction*>*> const& __get_interactions() const;

constexpr void __set_processors(::ArrayW<::UnityEngine::InputSystem::InputProcessor*,::Array<::UnityEngine::InputSystem::InputProcessor*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputProcessor*,::Array<::UnityEngine::InputSystem::InputProcessor*>*>& __get_processors() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputProcessor*,::Array<::UnityEngine::InputSystem::InputProcessor*>*> const& __get_processors() const;

constexpr void __set_composites(::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*,::Array<::UnityEngine::InputSystem::InputBindingComposite*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*,::Array<::UnityEngine::InputSystem::InputBindingComposite*>*>& __get_composites() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*,::Array<::UnityEngine::InputSystem::InputBindingComposite*>*> const& __get_composites() const;

constexpr void __set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value) ;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& __get_bindingMask() ;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& __get_bindingMask() const;

constexpr void __set_m_IsControlOnlyResolve(bool  value) ;

constexpr bool& __get_m_IsControlOnlyResolve() ;

constexpr bool const& __get_m_IsControlOnlyResolve() const;

constexpr void __set_m_Parameters(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>* __get_m_Parameters() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*> __get_m_Parameters() const;

/// @brief Method get_totalMapCount addr 0x2a56984 size 0x8 virtual false final false
inline int32_t get_totalMapCount() ;

/// @brief Method get_totalActionCount addr 0x2a5698c size 0x8 virtual false final false
inline int32_t get_totalActionCount() ;

/// @brief Method get_totalBindingCount addr 0x2a56994 size 0x8 virtual false final false
inline int32_t get_totalBindingCount() ;

/// @brief Method get_totalControlCount addr 0x2a5699c size 0x8 virtual false final false
inline int32_t get_totalControlCount() ;

/// @brief Method Dispose addr 0x2a569a4 size 0x48 virtual true final true
inline void Dispose() ;

/// @brief Method StartWithPreviousResolve addr 0x2a569ec size 0xe8 virtual false final false
inline void StartWithPreviousResolve(::UnityEngine::InputSystem::InputActionState*  state, bool  isFullResolve) ;

/// @brief Method AddActionMap addr 0x2a56ad4 size 0x1610 virtual false final false
inline void AddActionMap(::UnityEngine::InputSystem::InputActionMap*  actionMap) ;

/// @brief Method InstantiateWithParameters addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TType>
inline int32_t InstantiateWithParameters(::UnityEngine::InputSystem::Utilities::TypeTable  registrations, ::StringW  namesAndParameters, ByRef<::ArrayW<TType,::Array<TType>*>>  array, ByRef<int32_t>  count, ::UnityEngine::InputSystem::InputActionMap*  actionMap, ByRef<::UnityEngine::InputSystem::InputBinding>  binding) ;

/// @brief Method InstantiateBindingComposite addr 0x2a580e4 size 0x2f4 virtual false final false
static inline ::UnityEngine::InputSystem::InputBindingComposite* InstantiateBindingComposite(ByRef<::UnityEngine::InputSystem::InputBinding>  binding, ::UnityEngine::InputSystem::InputActionMap*  actionMap) ;

/// @brief Method ApplyParameters addr 0x2a58610 size 0x684 virtual false final false
static inline void ApplyParameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>  parameters, ::System::Object*  instance, ::UnityEngine::InputSystem::InputActionMap*  actionMap, ByRef<::UnityEngine::InputSystem::InputBinding>  binding, ::StringW  objectRegistrationName, ::StringW  namesAndParameters) ;

/// @brief Method AssignCompositePartIndex addr 0x2a583d8 size 0x238 virtual false final false
static inline int32_t AssignCompositePartIndex(::System::Object*  composite, ::StringW  name, ByRef<int32_t>  currentCompositePartCount) ;

// Ctor Parameters [CppParam { name: "totalProcessorCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalCompositeCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalInteractionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*>", modifiers: "", def_value: None }, CppParam { name: "controls", ty: "::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>", modifiers: "", def_value: None }, CppParam { name: "memory", ty: "::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::ArrayW<::UnityEngine::InputSystem::IInputInteraction*,::Array<::UnityEngine::InputSystem::IInputInteraction*>*>", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::ArrayW<::UnityEngine::InputSystem::InputProcessor*,::Array<::UnityEngine::InputSystem::InputProcessor*>*>", modifiers: "", def_value: None }, CppParam { name: "composites", ty: "::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*,::Array<::UnityEngine::InputSystem::InputBindingComposite*>*>", modifiers: "", def_value: None }, CppParam { name: "bindingMask", ty: "::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>", modifiers: "", def_value: None }, CppParam { name: "m_IsControlOnlyResolve", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Parameters", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*", modifiers: "", def_value: None }]
constexpr InputBindingResolver(int32_t  totalProcessorCount, int32_t  totalCompositeCount, int32_t  totalInteractionCount, ::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*>  maps, ::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>  controls, ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory  memory, ::ArrayW<::UnityEngine::InputSystem::IInputInteraction*,::Array<::UnityEngine::InputSystem::IInputInteraction*>*>  interactions, ::ArrayW<::UnityEngine::InputSystem::InputProcessor*,::Array<::UnityEngine::InputSystem::InputProcessor*>*>  processors, ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*,::Array<::UnityEngine::InputSystem::InputBindingComposite*>*>  composites, ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  bindingMask, bool  m_IsControlOnlyResolve, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*  m_Parameters) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputBindingResolver(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x128>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputBindingResolver()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputBindingResolver, 0x128>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBindingResolver, "UnityEngine.InputSystem", "InputBindingResolver");
