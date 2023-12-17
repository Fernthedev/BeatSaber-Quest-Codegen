#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventDispatcherGate)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct EventDispatcherGate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::EventDispatcherGate);
// Type: UnityEngine.UIElements::EventDispatcherGate
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6912))
// CS Name: ::UnityEngine.UIElements::EventDispatcherGate
struct CORDL_TYPE EventDispatcherGate : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Dispatcher offset 0x0
 __declspec(property(get=__get_m_Dispatcher, put=__set_m_Dispatcher)) ::UnityEngine::UIElements::EventDispatcher*  m_Dispatcher;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::EventDispatcherGate>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::EventDispatcherGate>*() ;

constexpr void __set_m_Dispatcher(::UnityEngine::UIElements::EventDispatcher*  value) ;

constexpr ::UnityEngine::UIElements::EventDispatcher* __get_m_Dispatcher() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventDispatcher*> __get_m_Dispatcher() const;

/// @brief Method .ctor addr 0x2e0254c size 0x6c virtual false final false
inline void _ctor(::UnityEngine::UIElements::EventDispatcher*  d) ;

/// @brief Method Dispose addr 0x2e025c8 size 0x18 virtual true final true
inline void Dispose() ;

/// @brief Method Equals addr 0x2e02668 size 0xc virtual true final true
inline bool Equals(::UnityEngine::UIElements::EventDispatcherGate  other) ;

/// @brief Method Equals addr 0x2e02674 size 0x7c virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e026f0 size 0x18 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "m_Dispatcher", ty: "::UnityEngine::UIElements::EventDispatcher*", modifiers: "", def_value: None }]
constexpr EventDispatcherGate(::UnityEngine::UIElements::EventDispatcher*  m_Dispatcher) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EventDispatcherGate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EventDispatcherGate()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDispatcherGate, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDispatcherGate, "UnityEngine.UIElements", "EventDispatcherGate");
