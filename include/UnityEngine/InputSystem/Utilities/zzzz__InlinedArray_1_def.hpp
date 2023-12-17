#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InlinedArray_1)
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct __InlinedArray_1__Enumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace UnityEngine::InputSystem::OnScreen {
struct __OnScreenControl__OnScreenDeviceInfo;
}
namespace UnityEngine::InputSystem::UI {
struct PointerModel;
}
namespace UnityEngine::InputSystem::Users {
struct __InputUser__OngoingAccountSelection;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
namespace UnityEngine::InputSystem {
struct __InputManager__StateChangeMonitorTimeout;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct __InlinedArray_1__Enumerator;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::System::Runtime::InteropServices::GCHandle>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct InlinedArray_1<TValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<int32_t>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<uint64_t>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __InlinedArray_1__Enumerator<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __InlinedArray_1__Enumerator<::System::Runtime::InteropServices::GCHandle>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __InlinedArray_1__Enumerator<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __InlinedArray_1__Enumerator<::UnityEngine::InputSystem::UI::PointerModel>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::Substring>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __InlinedArray_1__Enumerator<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct __InlinedArray_1__Enumerator<TValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __InlinedArray_1__Enumerator<int32_t>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __InlinedArray_1__Enumerator<uint64_t>;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::InputSystem::Utilities::InlinedArray_1);
MARK_GEN_VAL_T(::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator);
// Type: ::Enumerator
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6668))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6668), inst: 3872 })
// CS Name: ::InlinedArray`1::Enumerator<TValue>
struct CORDL_TYPE __InlinedArray_1__Enumerator<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo> : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field array offset 0x0
 __declspec(property(get=__get_array, put=__set_array)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>  array;

/// @brief Field index offset 0x38
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>& __get_array() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo> const& __get_array() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>  array, int32_t  index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InlinedArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InlinedArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6668))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6668), inst: 3871 })
// CS Name: ::InlinedArray`1::Enumerator<TValue>
struct CORDL_TYPE __InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field array offset 0x0
 __declspec(property(get=__get_array, put=__set_array)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>  array;

/// @brief Field index offset 0x20
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>& __get_array() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection> const& __get_array() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>  array, int32_t  index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InlinedArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InlinedArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6668))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6668), inst: 3870 })
// CS Name: ::InlinedArray`1::Enumerator<TValue>
struct CORDL_TYPE __InlinedArray_1__Enumerator<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout> : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field array offset 0x0
 __declspec(property(get=__get_array, put=__set_array)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>  array;

/// @brief Field index offset 0x38
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>& __get_array() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout> const& __get_array() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>  array, int32_t  index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InlinedArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InlinedArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6668))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6668), inst: 3868 })
// CS Name: ::InlinedArray`1::Enumerator<TValue>
struct CORDL_TYPE __InlinedArray_1__Enumerator<::UnityEngine::InputSystem::UI::PointerModel> : public ::bs_hook::ValueTypeWrapper<0x220> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x220};

/// @brief Field array offset 0x0
 __declspec(property(get=__get_array, put=__set_array)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>  array;

/// @brief Field index offset 0x218
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::UI::PointerModel  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::UI::PointerModel>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::UI::PointerModel>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>& __get_array() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> const& __get_array() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::UI::PointerModel get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>  array, int32_t  index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InlinedArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x220>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InlinedArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6668))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6668), inst: 3866 })
// CS Name: ::InlinedArray`1::Enumerator<TValue>
struct CORDL_TYPE __InlinedArray_1__Enumerator<::System::Runtime::InteropServices::GCHandle> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field array offset 0x0
 __declspec(property(get=__get_array, put=__set_array)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>  array;

/// @brief Field index offset 0x18
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

 __declspec(property(get=get_Current)) ::System::Runtime::InteropServices::GCHandle  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Runtime::InteropServices::GCHandle>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Runtime::InteropServices::GCHandle>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>& __get_array() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> const& __get_array() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Runtime::InteropServices::GCHandle get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>  array, int32_t  index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InlinedArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InlinedArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6668))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6668), inst: 3057 })
// CS Name: ::InlinedArray`1::Enumerator<TValue>
struct CORDL_TYPE __InlinedArray_1__Enumerator<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field array offset 0x0
 __declspec(property(get=__get_array, put=__set_array)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>  array;

/// @brief Field index offset 0x18
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

 __declspec(property(get=get_Current)) ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>& __get_array() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> const& __get_array() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>  array, int32_t  index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InlinedArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InlinedArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6668))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6668), inst: 2710 })
// CS Name: ::InlinedArray`1::Enumerator<TValue>
struct CORDL_TYPE __InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::Substring> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field array offset 0x0
 __declspec(property(get=__get_array, put=__set_array)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>  array;

/// @brief Field index offset 0x20
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::Utilities::Substring  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>& __get_array() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> const& __get_array() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::Utilities::Substring get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>  array, int32_t  index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InlinedArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InlinedArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6668))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6668), inst: 2598 })
// CS Name: ::InlinedArray`1::Enumerator<TValue>
struct CORDL_TYPE __InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field array offset 0x0
 __declspec(property(get=__get_array, put=__set_array)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  array;

/// @brief Field index offset 0x20
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::Utilities::InternedString  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>& __get_array() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const& __get_array() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::Utilities::InternedString get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  array, int32_t  index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InlinedArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InlinedArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6668))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6668), inst: 407 })
// CS Name: ::InlinedArray`1::Enumerator<TValue>
struct CORDL_TYPE __InlinedArray_1__Enumerator<uint64_t> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field array offset 0x0
 __declspec(property(get=__get_array, put=__set_array)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>  array;

/// @brief Field index offset 0x18
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

 __declspec(property(get=get_Current)) uint64_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<uint64_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<uint64_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>& __get_array() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> const& __get_array() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline uint64_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>  array, int32_t  index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InlinedArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InlinedArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6668))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6668), inst: 98 })
// CS Name: ::InlinedArray`1::Enumerator<TValue>
struct CORDL_TYPE __InlinedArray_1__Enumerator<int32_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field array offset 0x0
 __declspec(property(get=__get_array, put=__set_array)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>  array;

/// @brief Field index offset 0x10
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

 __declspec(property(get=get_Current)) int32_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>& __get_array() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> const& __get_array() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>  array, int32_t  index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InlinedArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InlinedArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6668))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6668), inst: 2 })
// CS Name: ::InlinedArray`1::Enumerator<TValue>
struct CORDL_TYPE __InlinedArray_1__Enumerator<TValue> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field array offset 0x0
 __declspec(property(get=__get_array, put=__set_array)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>  array;

/// @brief Field index offset 0x18
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

 __declspec(property(get=get_Current)) TValue  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TValue>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>& __get_array() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> const& __get_array() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>  array, int32_t  index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InlinedArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InlinedArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6669))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3872 })
// CS Name: ::UnityEngine.InputSystem.Utilities::InlinedArray`1<TValue>
struct CORDL_TYPE InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo> : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field length offset 0x0
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

/// @brief Field firstValue offset 0x8
 __declspec(property(get=__get_firstValue, put=__set_firstValue)) ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo  firstValue;

/// @brief Field additionalValues offset 0x30
 __declspec(property(get=__get_additionalValues, put=__set_additionalValues)) ::ArrayW<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo,::Array<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>*>  additionalValues;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

constexpr void __set_firstValue(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo  value) ;

constexpr ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo& __get_firstValue() ;

constexpr ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo const& __get_firstValue() const;

constexpr void __set_additionalValues(::ArrayW<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo,::Array<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo,::Array<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>*>& __get_additionalValues() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo,::Array<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>*> const& __get_additionalValues() const;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo  firstValue, ::ArrayW<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo,::Array<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>*>  additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>*  values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo  value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetLength(int32_t  size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo,::Array<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>*> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
inline ::ArrayW<TOther,::Array<TOther>*> ToArray(::System::Func_2<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo,TOther>*  mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo  value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Append(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo  value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t AppendWithCapacity(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo  value, int32_t  capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>  values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Append(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>*  values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo  value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtWithCapacity(int32_t  index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtByMovingTailWithCapacity(int32_t  index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool RemoveByMovingTailWithCapacity(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo  value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo  value, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>*  comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>  other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo,::Array<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>*>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t  length, ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo  firstValue, ::ArrayW<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo,::Array<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>*>  additionalValues) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InlinedArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InlinedArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6669))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3871 })
// CS Name: ::UnityEngine.InputSystem.Utilities::InlinedArray`1<TValue>
struct CORDL_TYPE InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field length offset 0x0
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

/// @brief Field firstValue offset 0x8
 __declspec(property(get=__get_firstValue, put=__set_firstValue)) ::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection  firstValue;

/// @brief Field additionalValues offset 0x18
 __declspec(property(get=__get_additionalValues, put=__set_additionalValues)) ::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection,::Array<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>*>  additionalValues;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

constexpr void __set_firstValue(::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection  value) ;

constexpr ::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection& __get_firstValue() ;

constexpr ::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection const& __get_firstValue() const;

constexpr void __set_additionalValues(::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection,::Array<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection,::Array<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>*>& __get_additionalValues() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection,::Array<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>*> const& __get_additionalValues() const;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection  firstValue, ::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection,::Array<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>*>  additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>*  values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection  value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetLength(int32_t  size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection,::Array<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>*> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
inline ::ArrayW<TOther,::Array<TOther>*> ToArray(::System::Func_2<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection,TOther>*  mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection  value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Append(::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection  value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t AppendWithCapacity(::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection  value, int32_t  capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>  values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Append(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>*  values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection  value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtWithCapacity(int32_t  index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtByMovingTailWithCapacity(int32_t  index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool RemoveByMovingTailWithCapacity(::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection  value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection  value, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>*  comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>  other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection,::Array<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>*>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t  length, ::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection  firstValue, ::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection,::Array<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>*>  additionalValues) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InlinedArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InlinedArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6669))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3870 })
// CS Name: ::UnityEngine.InputSystem.Utilities::InlinedArray`1<TValue>
struct CORDL_TYPE InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout> : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field length offset 0x0
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

/// @brief Field firstValue offset 0x8
 __declspec(property(get=__get_firstValue, put=__set_firstValue)) ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout  firstValue;

/// @brief Field additionalValues offset 0x30
 __declspec(property(get=__get_additionalValues, put=__set_additionalValues)) ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>*>  additionalValues;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

constexpr void __set_firstValue(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout  value) ;

constexpr ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout& __get_firstValue() ;

constexpr ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout const& __get_firstValue() const;

constexpr void __set_additionalValues(::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>*>& __get_additionalValues() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>*> const& __get_additionalValues() const;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout  firstValue, ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>*>  additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>*  values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout  value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetLength(int32_t  size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>*> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
inline ::ArrayW<TOther,::Array<TOther>*> ToArray(::System::Func_2<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout,TOther>*  mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout  value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Append(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout  value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t AppendWithCapacity(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout  value, int32_t  capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>  values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Append(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>*  values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout  value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtWithCapacity(int32_t  index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtByMovingTailWithCapacity(int32_t  index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool RemoveByMovingTailWithCapacity(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout  value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout  value, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>*  comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>  other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>*>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t  length, ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout  firstValue, ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>*>  additionalValues) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InlinedArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InlinedArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6669))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3868 })
// CS Name: ::UnityEngine.InputSystem.Utilities::InlinedArray`1<TValue>
struct CORDL_TYPE InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> : public ::bs_hook::ValueTypeWrapper<0x218> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::UI::PointerModel>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x218};

/// @brief Field length offset 0x0
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

/// @brief Field firstValue offset 0x8
 __declspec(property(get=__get_firstValue, put=__set_firstValue)) ::UnityEngine::InputSystem::UI::PointerModel  firstValue;

/// @brief Field additionalValues offset 0x210
 __declspec(property(get=__get_additionalValues, put=__set_additionalValues)) ::ArrayW<::UnityEngine::InputSystem::UI::PointerModel,::Array<::UnityEngine::InputSystem::UI::PointerModel>*>  additionalValues;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::InputSystem::UI::PointerModel  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::UI::PointerModel>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::UI::PointerModel>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

constexpr void __set_firstValue(::UnityEngine::InputSystem::UI::PointerModel  value) ;

constexpr ::UnityEngine::InputSystem::UI::PointerModel& __get_firstValue() ;

constexpr ::UnityEngine::InputSystem::UI::PointerModel const& __get_firstValue() const;

constexpr void __set_additionalValues(::ArrayW<::UnityEngine::InputSystem::UI::PointerModel,::Array<::UnityEngine::InputSystem::UI::PointerModel>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::UI::PointerModel,::Array<::UnityEngine::InputSystem::UI::PointerModel>*>& __get_additionalValues() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::UI::PointerModel,::Array<::UnityEngine::InputSystem::UI::PointerModel>*> const& __get_additionalValues() const;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::UI::PointerModel  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::UI::PointerModel  firstValue, ::ArrayW<::UnityEngine::InputSystem::UI::PointerModel,::Array<::UnityEngine::InputSystem::UI::PointerModel>*>  additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::UI::PointerModel>*  values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::UI::PointerModel get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::InputSystem::UI::PointerModel  value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetLength(int32_t  size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::UI::PointerModel,::Array<::UnityEngine::InputSystem::UI::PointerModel>*> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
inline ::ArrayW<TOther,::Array<TOther>*> ToArray(::System::Func_2<::UnityEngine::InputSystem::UI::PointerModel,TOther>*  mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::UnityEngine::InputSystem::UI::PointerModel  value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Append(::UnityEngine::InputSystem::UI::PointerModel  value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t AppendWithCapacity(::UnityEngine::InputSystem::UI::PointerModel  value, int32_t  capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>  values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Append(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::UI::PointerModel>*  values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(::UnityEngine::InputSystem::UI::PointerModel  value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtWithCapacity(int32_t  index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtByMovingTailWithCapacity(int32_t  index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool RemoveByMovingTailWithCapacity(::UnityEngine::InputSystem::UI::PointerModel  value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::UnityEngine::InputSystem::UI::PointerModel  value, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::UI::PointerModel>*  comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>  other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::UI::PointerModel>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::UnityEngine::InputSystem::UI::PointerModel", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::UnityEngine::InputSystem::UI::PointerModel,::Array<::UnityEngine::InputSystem::UI::PointerModel>*>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t  length, ::UnityEngine::InputSystem::UI::PointerModel  firstValue, ::ArrayW<::UnityEngine::InputSystem::UI::PointerModel,::Array<::UnityEngine::InputSystem::UI::PointerModel>*>  additionalValues) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InlinedArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x218>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InlinedArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6669))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3866 })
// CS Name: ::UnityEngine.InputSystem.Utilities::InlinedArray`1<TValue>
struct CORDL_TYPE InlinedArray_1<::System::Runtime::InteropServices::GCHandle> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator<::System::Runtime::InteropServices::GCHandle>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field length offset 0x0
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

/// @brief Field firstValue offset 0x8
 __declspec(property(get=__get_firstValue, put=__set_firstValue)) ::System::Runtime::InteropServices::GCHandle  firstValue;

/// @brief Field additionalValues offset 0x10
 __declspec(property(get=__get_additionalValues, put=__set_additionalValues)) ::ArrayW<::System::Runtime::InteropServices::GCHandle,::Array<::System::Runtime::InteropServices::GCHandle>*>  additionalValues;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Runtime::InteropServices::GCHandle  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Runtime::InteropServices::GCHandle>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Runtime::InteropServices::GCHandle>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

constexpr void __set_firstValue(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr ::System::Runtime::InteropServices::GCHandle& __get_firstValue() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __get_firstValue() const;

constexpr void __set_additionalValues(::ArrayW<::System::Runtime::InteropServices::GCHandle,::Array<::System::Runtime::InteropServices::GCHandle>*>  value) ;

constexpr ::ArrayW<::System::Runtime::InteropServices::GCHandle,::Array<::System::Runtime::InteropServices::GCHandle>*>& __get_additionalValues() ;

constexpr ::ArrayW<::System::Runtime::InteropServices::GCHandle,::Array<::System::Runtime::InteropServices::GCHandle>*> const& __get_additionalValues() const;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::InteropServices::GCHandle  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::InteropServices::GCHandle  firstValue, ::ArrayW<::System::Runtime::InteropServices::GCHandle,::Array<::System::Runtime::InteropServices::GCHandle>*>  additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Runtime::InteropServices::GCHandle>*  values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::InteropServices::GCHandle get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::System::Runtime::InteropServices::GCHandle  value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetLength(int32_t  size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::System::Runtime::InteropServices::GCHandle,::Array<::System::Runtime::InteropServices::GCHandle>*> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
inline ::ArrayW<TOther,::Array<TOther>*> ToArray(::System::Func_2<::System::Runtime::InteropServices::GCHandle,TOther>*  mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::System::Runtime::InteropServices::GCHandle  value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Append(::System::Runtime::InteropServices::GCHandle  value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t AppendWithCapacity(::System::Runtime::InteropServices::GCHandle  value, int32_t  capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>  values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Append(::System::Collections::Generic::IEnumerable_1<::System::Runtime::InteropServices::GCHandle>*  values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(::System::Runtime::InteropServices::GCHandle  value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtWithCapacity(int32_t  index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtByMovingTailWithCapacity(int32_t  index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool RemoveByMovingTailWithCapacity(::System::Runtime::InteropServices::GCHandle  value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::System::Runtime::InteropServices::GCHandle  value, ::System::Collections::Generic::IEqualityComparer_1<::System::Runtime::InteropServices::GCHandle>*  comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>  other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Runtime::InteropServices::GCHandle>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::System::Runtime::InteropServices::GCHandle,::Array<::System::Runtime::InteropServices::GCHandle>*>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t  length, ::System::Runtime::InteropServices::GCHandle  firstValue, ::ArrayW<::System::Runtime::InteropServices::GCHandle,::Array<::System::Runtime::InteropServices::GCHandle>*>  additionalValues) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InlinedArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InlinedArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6669))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3057 })
// CS Name: ::UnityEngine.InputSystem.Utilities::InlinedArray`1<TValue>
struct CORDL_TYPE InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field length offset 0x0
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

/// @brief Field firstValue offset 0x4
 __declspec(property(get=__get_firstValue, put=__set_firstValue)) ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  firstValue;

/// @brief Field additionalValues offset 0x10
 __declspec(property(get=__get_additionalValues, put=__set_additionalValues)) ::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*>  additionalValues;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

constexpr void __set_firstValue(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  value) ;

constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>& __get_firstValue() ;

constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> const& __get_firstValue() const;

constexpr void __set_additionalValues(::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*>& __get_additionalValues() ;

constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*> const& __get_additionalValues() const;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  firstValue, ::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*>  additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*  values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetLength(int32_t  size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
inline ::ArrayW<TOther,::Array<TOther>*> ToArray(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,TOther>*  mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Append(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t AppendWithCapacity(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  value, int32_t  capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>  values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Append(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*  values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtWithCapacity(int32_t  index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtByMovingTailWithCapacity(int32_t  index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool RemoveByMovingTailWithCapacity(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  value, ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*  comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>  other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t  length, ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  firstValue, ::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*>  additionalValues) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InlinedArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InlinedArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6669))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 2710 })
// CS Name: ::UnityEngine.InputSystem.Utilities::InlinedArray`1<TValue>
struct CORDL_TYPE InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::Substring>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field length offset 0x0
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

/// @brief Field firstValue offset 0x8
 __declspec(property(get=__get_firstValue, put=__set_firstValue)) ::UnityEngine::InputSystem::Utilities::Substring  firstValue;

/// @brief Field additionalValues offset 0x18
 __declspec(property(get=__get_additionalValues, put=__set_additionalValues)) ::ArrayW<::UnityEngine::InputSystem::Utilities::Substring,::Array<::UnityEngine::InputSystem::Utilities::Substring>*>  additionalValues;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::InputSystem::Utilities::Substring  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

constexpr void __set_firstValue(::UnityEngine::InputSystem::Utilities::Substring  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::Substring& __get_firstValue() ;

constexpr ::UnityEngine::InputSystem::Utilities::Substring const& __get_firstValue() const;

constexpr void __set_additionalValues(::ArrayW<::UnityEngine::InputSystem::Utilities::Substring,::Array<::UnityEngine::InputSystem::Utilities::Substring>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::Substring,::Array<::UnityEngine::InputSystem::Utilities::Substring>*>& __get_additionalValues() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::Substring,::Array<::UnityEngine::InputSystem::Utilities::Substring>*> const& __get_additionalValues() const;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Utilities::Substring  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Utilities::Substring  firstValue, ::ArrayW<::UnityEngine::InputSystem::Utilities::Substring,::Array<::UnityEngine::InputSystem::Utilities::Substring>*>  additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>*  values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::Substring get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::InputSystem::Utilities::Substring  value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetLength(int32_t  size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::Utilities::Substring,::Array<::UnityEngine::InputSystem::Utilities::Substring>*> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
inline ::ArrayW<TOther,::Array<TOther>*> ToArray(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,TOther>*  mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::UnityEngine::InputSystem::Utilities::Substring  value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Append(::UnityEngine::InputSystem::Utilities::Substring  value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t AppendWithCapacity(::UnityEngine::InputSystem::Utilities::Substring  value, int32_t  capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>  values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Append(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>*  values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(::UnityEngine::InputSystem::Utilities::Substring  value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtWithCapacity(int32_t  index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtByMovingTailWithCapacity(int32_t  index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool RemoveByMovingTailWithCapacity(::UnityEngine::InputSystem::Utilities::Substring  value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::UnityEngine::InputSystem::Utilities::Substring  value, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::Substring>*  comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>  other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::Substring,::Array<::UnityEngine::InputSystem::Utilities::Substring>*>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t  length, ::UnityEngine::InputSystem::Utilities::Substring  firstValue, ::ArrayW<::UnityEngine::InputSystem::Utilities::Substring,::Array<::UnityEngine::InputSystem::Utilities::Substring>*>  additionalValues) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InlinedArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InlinedArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6669))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 2598 })
// CS Name: ::UnityEngine.InputSystem.Utilities::InlinedArray`1<TValue>
struct CORDL_TYPE InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field length offset 0x0
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

/// @brief Field firstValue offset 0x8
 __declspec(property(get=__get_firstValue, put=__set_firstValue)) ::UnityEngine::InputSystem::Utilities::InternedString  firstValue;

/// @brief Field additionalValues offset 0x18
 __declspec(property(get=__get_additionalValues, put=__set_additionalValues)) ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  additionalValues;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::InputSystem::Utilities::InternedString  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

constexpr void __set_firstValue(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get_firstValue() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get_firstValue() const;

constexpr void __set_additionalValues(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>& __get_additionalValues() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> const& __get_additionalValues() const;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Utilities::InternedString  firstValue, ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetLength(int32_t  size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
inline ::ArrayW<TOther,::Array<TOther>*> ToArray(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,TOther>*  mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Append(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t AppendWithCapacity(::UnityEngine::InputSystem::Utilities::InternedString  value, int32_t  capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Append(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtWithCapacity(int32_t  index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtByMovingTailWithCapacity(int32_t  index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool RemoveByMovingTailWithCapacity(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::UnityEngine::InputSystem::Utilities::InternedString  value, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString>*  comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t  length, ::UnityEngine::InputSystem::Utilities::InternedString  firstValue, ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  additionalValues) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InlinedArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InlinedArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6669))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 407 })
// CS Name: ::UnityEngine.InputSystem.Utilities::InlinedArray`1<TValue>
struct CORDL_TYPE InlinedArray_1<uint64_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator<uint64_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field length offset 0x0
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

/// @brief Field firstValue offset 0x8
 __declspec(property(get=__get_firstValue, put=__set_firstValue)) uint64_t  firstValue;

/// @brief Field additionalValues offset 0x10
 __declspec(property(get=__get_additionalValues, put=__set_additionalValues)) ::ArrayW<uint64_t,::Array<uint64_t>*>  additionalValues;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) uint64_t  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<uint64_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<uint64_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

constexpr void __set_firstValue(uint64_t  value) ;

constexpr uint64_t& __get_firstValue() ;

constexpr uint64_t const& __get_firstValue() const;

constexpr void __set_additionalValues(::ArrayW<uint64_t,::Array<uint64_t>*>  value) ;

constexpr ::ArrayW<uint64_t,::Array<uint64_t>*>& __get_additionalValues() ;

constexpr ::ArrayW<uint64_t,::Array<uint64_t>*> const& __get_additionalValues() const;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint64_t  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint64_t  firstValue, ::ArrayW<uint64_t,::Array<uint64_t>*>  additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<uint64_t>*  values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint64_t get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, uint64_t  value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetLength(int32_t  size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<uint64_t,::Array<uint64_t>*> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
inline ::ArrayW<TOther,::Array<TOther>*> ToArray(::System::Func_2<uint64_t,TOther>*  mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(uint64_t  value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Append(uint64_t  value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t AppendWithCapacity(uint64_t  value, int32_t  capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>  values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Append(::System::Collections::Generic::IEnumerable_1<uint64_t>*  values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(uint64_t  value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtWithCapacity(int32_t  index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtByMovingTailWithCapacity(int32_t  index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool RemoveByMovingTailWithCapacity(uint64_t  value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(uint64_t  value, ::System::Collections::Generic::IEqualityComparer_1<uint64_t>*  comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>  other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<uint64_t>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<uint64_t,::Array<uint64_t>*>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t  length, uint64_t  firstValue, ::ArrayW<uint64_t,::Array<uint64_t>*>  additionalValues) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InlinedArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InlinedArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6669))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 98 })
// CS Name: ::UnityEngine.InputSystem.Utilities::InlinedArray`1<TValue>
struct CORDL_TYPE InlinedArray_1<int32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator<int32_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field length offset 0x0
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

/// @brief Field firstValue offset 0x4
 __declspec(property(get=__get_firstValue, put=__set_firstValue)) int32_t  firstValue;

/// @brief Field additionalValues offset 0x8
 __declspec(property(get=__get_additionalValues, put=__set_additionalValues)) ::ArrayW<int32_t,::Array<int32_t>*>  additionalValues;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) int32_t  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

constexpr void __set_firstValue(int32_t  value) ;

constexpr int32_t& __get_firstValue() ;

constexpr int32_t const& __get_firstValue() const;

constexpr void __set_additionalValues(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_additionalValues() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_additionalValues() const;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  firstValue, ::ArrayW<int32_t,::Array<int32_t>*>  additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<int32_t>*  values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, int32_t  value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetLength(int32_t  size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
inline ::ArrayW<TOther,::Array<TOther>*> ToArray(::System::Func_2<int32_t,TOther>*  mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(int32_t  value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Append(int32_t  value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t AppendWithCapacity(int32_t  value, int32_t  capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>  values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Append(::System::Collections::Generic::IEnumerable_1<int32_t>*  values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(int32_t  value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtWithCapacity(int32_t  index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtByMovingTailWithCapacity(int32_t  index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool RemoveByMovingTailWithCapacity(int32_t  value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(int32_t  value, ::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>  other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t  length, int32_t  firstValue, ::ArrayW<int32_t,::Array<int32_t>*>  additionalValues) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InlinedArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InlinedArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6669))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 2 })
// CS Name: ::UnityEngine.InputSystem.Utilities::InlinedArray`1<TValue>
struct CORDL_TYPE InlinedArray_1<TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator<TValue>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field length offset 0x0
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

/// @brief Field firstValue offset 0x8
 __declspec(property(get=__get_firstValue, put=__set_firstValue)) TValue  firstValue;

/// @brief Field additionalValues offset 0x10
 __declspec(property(get=__get_additionalValues, put=__set_additionalValues)) ::ArrayW<TValue,::Array<TValue>*>  additionalValues;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) TValue  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TValue>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

constexpr void __set_firstValue(TValue  value) ;

constexpr TValue& __get_firstValue() ;

constexpr TValue const& __get_firstValue() const;

constexpr void __set_additionalValues(::ArrayW<TValue,::Array<TValue>*>  value) ;

constexpr ::ArrayW<TValue,::Array<TValue>*>& __get_additionalValues() ;

constexpr ::ArrayW<TValue,::Array<TValue>*> const& __get_additionalValues() const;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TValue  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TValue  firstValue, ::ArrayW<TValue,::Array<TValue>*>  additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<TValue>*  values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, TValue  value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetLength(int32_t  size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<TValue,::Array<TValue>*> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
inline ::ArrayW<TOther,::Array<TOther>*> ToArray(::System::Func_2<TValue,TOther>*  mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(TValue  value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Append(TValue  value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t AppendWithCapacity(TValue  value, int32_t  capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>  values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Append(::System::Collections::Generic::IEnumerable_1<TValue>*  values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Remove(TValue  value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtWithCapacity(int32_t  index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveAtByMovingTailWithCapacity(int32_t  index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool RemoveByMovingTailWithCapacity(TValue  value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(TValue  value, ::System::Collections::Generic::IEqualityComparer_1<TValue>*  comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>  other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<TValue>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "TValue", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<TValue,::Array<TValue>*>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t  length, TValue  firstValue, ::ArrayW<TValue,::Array<TValue>*>  additionalValues) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InlinedArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InlinedArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::InlinedArray_1, "UnityEngine.InputSystem.Utilities", "InlinedArray`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator, "UnityEngine.InputSystem.Utilities", "InlinedArray`1/Enumerator");
